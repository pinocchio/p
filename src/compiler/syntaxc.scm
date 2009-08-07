(include "ast.scm")

(define (syntax-fail msg stx)
    (error (string-append msg " in \""
                (syntax-source stx)
                "\" Line: "
                (number->string (syntax-line stx))
                " Column: "
                (number->string (syntax-column stx)))))

(define (transform-apply self parser scope stx args)
    (let ((args (map (lambda (arg)
            (parser 'expression scope arg)) args)))
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
            (let ((exp (syntax-e stx)))
                (if (list? exp)
                    (parse-application scope stx exp)
                    (parse-literal scope stx exp)))))

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
                ((expression) (apply parse-expression args))
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

(define (load-transformer msg . args)
    (unless (eq? msg 'apply)
        (syntax-fail "Invalid load usage" stx))
    (apply (lambda (parser scope stx args)
        (if (or (null? args) (> (length args) 1)) 
            (syntax-fail "Invalid syntax in load" stx)
            (let ((arg (syntax-e (car args))))
                (if (string? arg)
                    (parser 'parse scope arg)
                    (syntax-fail "Invalid load syntax, expected string" exp)))))
        args))

(define (setup-transformers scope)
    (scope 'bind 'load load-transformer)
)
