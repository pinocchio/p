(include "ast.scm")

(define (transform-apply self parser scope stx args)
    (let* ((args (if (syntax? args) (syntax-e args) args))
           (args (map (lambda (arg)
                    (parser 'expression scope arg))
                args)))
        (new-application stx self args)))

(define (new-parser)
    (letrec (
        (sources (new-collection))

        (parse-literal (lambda (scope stx literal)
            (cond ((number? literal)    (new-number literal))
                  ((string? literal)    (new-string literal))
                  ((boolean? literal)   (new-bool literal))
                  ((char? literal)      (new-char literal))
                  (else (lookup-variable stx scope)))))
        
        (parse-application (lambda (scope stx application)
            (if (null? application)
                (scope 'addCode ast-null)
                (let ((o (parse-expression scope (car (syntax-e stx)))))
                    (o 'apply parser scope stx (cdr (syntax-e stx)))))))
        
        (parse-expression (lambda (scope stx)
            (let ((exp (msyntax->datum stx)))
                (if (pair? exp)
                    (parse-application scope stx exp)
                    (if (pair? exp)
                        (syntax-fail "Unexpected pair syntax" stx)
                        (parse-literal scope stx exp))))))

        (parse (lambda (scope file)
            (let ((fp (open-input-file file)))
                (port-count-lines! fp)
                (sources 'add file)
                (let read-all ((code (read-syntax file fp)))
                    (if (eof-object? code)
                        (close-input-port fp)
                        (begin
                            (parse-expression scope code)
                            (read-all (read-syntax file fp))))))))

        (parser (lambda (msg . args)
            (case msg
                ((parse) (apply parse args))
                ((expression)
                    (apply parse-expression args))
                (else (error "Parser DNU: " msg args))))))
        parser))

(define (new-compiler)
    (letrec (
        (globals (new-environment native))
        (parser (new-parser))

        (pc-load (lambda files
            (map (lambda (file)
                     (apply parser (list 'parse globals file)))
                files)))

        (compiler (lambda (msg . args)
            (case msg
                ((load) (apply pc-load args))
                (else (error "Compiler DNU: " msg args))))))
        (setup-transformers globals)
        compiler)) 

(define (expand-parameter scope parameter)
    (let ((name (syntax-e parameter))) 
        (unless (symbol? name)
            (syntax-fail "Symbol expected" parameter))
        (if (scope 'contains? name)
            (syntax-fail "Duplicate parameter" parameter)
            (let ((var (new-variable parameter name)))
                (scope 'bind name var)
                var))))

(define (lookup-variable variable scope)
    (let ((var (msyntax->datum variable)))
        (unless (symbol? var)
            (syntax-fail "Expected variable name" variable))
        (let ((result (scope 'lookup var)))
            (if result
                result
                (syntax-fail (string-append
                                "Unbound identifier '"
                                (symbol->string var)
                                "'") variable)))))

(define (setup-transformers scope)
    (syntax-transformer p:load (parser scope stx)
        ((file)
            (unless (string? file)
                (syntax-fail "String expected" file))
            (parser 'parse scope file)))
    
    (syntax-transformer p:lambda (parser scope stx)
        (((parameter ...) first next ...)
            (let ((child (new-environment scope)))
                (new-lambda #'stx
                    (list (expand-parameter child #'parameter) ...)
                    (parser 'expression child #'first)
                    (parser 'expression child #'next) ...))))
    
    (syntax-transformer p:method (parser scope stx)
        (((parameter ...) first next ...)
            (let ((child (new-environment scope)))
                (new-method #'stx
                    (list (expand-parameter child #'parameter) ...)
                    (parser 'expression child #'first)
                    (parser 'expression child #'next) ...))))

    (syntax-transformer p:dispatch (parser scope stx)
        (((parameter ...) first next ...)
            (let ((child (new-environment scope)))
                (new-dispatch #'stx
                    (list (expand-parameter child #'parameter) ...)
                    (parser 'expression child #'first)
                    (parser 'expression child #'next) ...))))

    (syntax-transformer p:let (parser scope stx)
        ((((variable value) ...) e ...)
            (parser 'expression scope
                (datum->syntax #'stx
                    `((lambda (,#'variable ...) ,#'e ...) ,#'value ...)
                    #'stx)))
        ; named let
        ((name ((variable value) ...) e ...)
            (parser 'expression scope
                (datum->syntax #'stx
                    `(letrec ((name (lambda (,#'variable ...) ,#'e ...)))
                        (name ,#'value ...))
                    #'stx))))
    
    (syntax-transformer p:letrec (parser scope stx)
        ((((variable value) ...) e ...)
            (parser 'expression scope
                (datum->syntax #'stx
                    `((lambda (,#'variable ...)
                            (set! ,#'variable ,#'value) ...
                            ,#'e ...)
                        ,@(map (lambda (var) 'null) '(value ...)))
                    #'stx))))

    (syntax-transformer p:let* (parser scope stx)
        ((((var1 val1) (var2 val2) (var3 val3) ...) e ...)
            (parser 'expression scope
                (datum->syntax #'stx
                    `((lambda (,#'var1)
                        (let* ((,#'var2 ,#'val2)
                               (,#'var3 ,#'val3) ...)
                            ,#'e ...))
                        ,#'val1)
                    #'stx)))
        ((((var1 val1)) e ...)
            (parser 'expression scope
                (datum->syntax #'stx
                    `((lambda (,#'var1)
                        ,#'e ...) ,#'val1)
                    #'stx)))
        ((() e ...)
            (parser 'expression scope
                (datum->syntax #'stx
                    `((lambda () ,#'e ...))
                    #'stx))))
    
    (syntax-transformer p:set! (parser scope stx)
        ((variable value)
            (new-assign #'stx
                (lookup-variable #'variable scope)
                (parser 'expression scope #'value))))

    (syntax-transformer p:if (parser scope stx)
        ((test true false)
            (parser 'expression scope
                (datum->syntax #'stx
                    `(,#'test ,#'true ,#'false)
                    #'stx))))

    (syntax-transformer p:begin (parser scope stx)
        ((exp ...)
            (new-ast-list
                (map (lambda (s)
                        (parser 'expression scope s))
                    (list #'exp ...)))))

    (syntax-transformer p:quote (parser scope stx)
        ((e)
            (cond
                ((number? 'e) (new-number 'e))
                ((symbol? 'e) (symbol 'new 'e))
                ((string? 'e) (new-string 'e))
                ((char?   'e) (new-char   'e))
                (else
                    (syntax-fail "Quote format not (yet) supported" stx)))))

    ; TODO cleanup method format.
    (syntax-transformer p:newclass (parser scope stx)
        ((name super (ivar ...) (cvar ...)
                     ((imn imr ...) ...)
                     ((cmn cmr ...) ...))
            (display "New class: ")
            (display 'name)
            (newline)
            (parser 'expression scope
                (datum->syntax #'stx
                    `(let ((,#'name (,#'super 'subclass:instvars:classvars:
                                                ',#'name
                                                (vector ',#'ivar ...)
                                                (vector ',#'cvar ...))))
                        ,(datum->syntax #'imn
                            `(,#'name 'store:method:
                                ',#'imn (method ,#'imr ...))
                            #'imn) ...
                        ,(datum->syntax #'cmn
                            `((,#'name 'class) 'store:method:
                                ',#'cmn (method ,#'cmr ...))
                            #'cmn) ...
                        ,#'name)
                    #'stx))))

    (syntax-transformer p:vector (parser scope stx)
        ((element ...)
            (new-vector #'stx
                (map (lambda (el)
                        (parser 'expression scope el))
                    (list #'element ...)))))

    (syntax-transformer p:list (parser scope stx)
        ((element ...)
            (new-list #'stx
                (map (lambda (el)
                        (parser 'expression scope el))
                    (list #'element ...)))))

    (syntax-transformer p:bootstrapping-type (parser scope stx)
        ((name package
            ((ivar ivar_t) ...)
            (imeth ...)
            (cmeth ...)
            (hfunc ...))
          (parser 'expression scope
              'null)))

    ; TODO don't re-evaluate the var code multiple times!
    (syntax-transformer p:case (parser scope stx)
        ((var ((test) todo) (else otherwise))
            (parser 'expression scope
                (datum->syntax #'stx
                    `(if (eq? ,#'var ',#'test)
                         ,#'todo
                         ,#'otherwise)
                    #'stx)))
        ((var ((test1) todo1) ((test2) todo2) ... (else otherwise))
            (parser 'expression scope
                (datum->syntax #'stx
                    `(if (eq? ,#'var ',#'test1)
                         ,#'todo1
                        (case ,#'var
                            ((,#'test2) ,#'todo2)
                            ...
                            (else ,#'otherwise)))
                    #'stx))))

    (scope 'bind 'load      p:load)
    (scope 'bind 'lambda    p:lambda)
    (scope 'bind 'let       p:let)
    (scope 'bind 'let*      p:let*)
    (scope 'bind 'letrec    p:letrec)
    (scope 'bind 'set!      p:set!)
    (scope 'bind 'if        p:if)
    (scope 'bind 'begin     p:begin)
    (scope 'bind 'quote     p:quote)
    (scope 'bind 'newclass  p:newclass)
    (scope 'bind 'method    p:method)
    (scope 'bind 'vector    p:vector)
    (scope 'bind 'list      p:list)
    (scope 'bind 'bootstrapping-type p:bootstrapping-type)
    (scope 'bind 'dispatch  p:dispatch)
    (scope 'bind 'case      p:case)
)
