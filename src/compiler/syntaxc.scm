(include "ast.scm")

(define (if-path->string p)
    (if (path? p)
        (path->string p)
        p))

(define (syntax-fail msg stx)
    (error (string-append msg " in \""
                (if-path->string (syntax-source stx))
                "\" Line: "
                (number->string (syntax-line stx))
                " Column: "
                (number->string (+ (syntax-column stx) 1)))))

(define (transform-apply self parser scope stx args)
    (let* ((args (if (syntax? args) (msyntax->datum args) args))
           (args (map (lambda (arg)
                    (parser 'expression scope arg))
                args)))
        (new-application stx self args)))

(define (new-parser)
    (letrec (
        (sources (new-collection))

        (parse-literal (lambda (scope stx literal)
            (cond ((number? literal) (new-number literal))
                  ((string? literal) (new-string literal))
                  (else (let ((transformer (scope 'lookup literal)))
                            (if transformer transformer
                                (syntax-fail
                                    (string-append "Unbound variable '"
                                                   (symbol->string literal)
                                                   "'")
                                    stx)))))))
        
        (parse-application (lambda (scope stx application)
            (if (null? application)
                (scope 'addCode ast-null)
                (let ((o (parse-expression scope (car application))))
                    (o 'apply parser scope stx (cdr application))))))
                
        
        (parse-expression (lambda (scope stx)
            (let ((exp (msyntax->datum stx)))
                (if (list? exp)
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

(syntax-transformer load:transformer (parser scope stx)
    ((file)
        (begin 
        (unless (string? file)
            (syntax-fail "String expected" file))
        (parser 'parse scope file))))

(define (expand-parameter scope parameter)
    (let ((name (syntax-e parameter))) 
        (unless (symbol? name)
            (syntax-fail "Symbol expected" parameter))
        (if (scope 'contains? name)
            (syntax-fail "Duplicate parameter" parameter)
            (let ((var (new-variable parameter name)))
                (scope 'bind name var)
                var))))

(syntax-transformer lambda:transformer (parser scope stx)
    (((parameter ...) first next ...)
        (let ((child (new-environment scope)))
            (new-lambda #'stx
                (list (expand-parameter child #'parameter) ...)
                (parser 'expression child #'first)
                (parser 'expression child #'next) ...))))

(syntax-transformer let:transformer (parser scope stx)
    ((((variable value) ...) e ...)
        (parser 'expression scope
            #'((lambda (variable ...) e ...) value ...))))

(define (setup-transformers scope)
    (scope 'bind 'load load:transformer)
    (scope 'bind 'lambda lambda:transformer)
    (scope 'bind 'let let:transformer)
)
