(include "ast.scm")
(require scheme/mzscheme)

(define (new-parser)
    (letrec (
        (sources (new-collection))

        (syntax-fail (lambda (stx)
            (error "Invalid syntax at: "
                (syntax-source stx)
                (syntax-line stx)
                (syntax-column stx)
                (syntax-object->datum stx))))

        (parse-expression (lambda (scope stx)
            (syntax-case stx (load)
                ((load file) (self 'parse scope #'file))
                (else (syntax-fail stx)))))

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
                ))))
                ;(else (error "Parser DNU: " msg args)))))
        parser))

(define (new-compiler)
    (letrec (
        (globals (new-environment native))
        (parser (new-parser))
        (maincode (new-ast-list))

        (pc-load (lambda files
            (map (lambda (file)
                     (apply parser (list 'parse globals file)))
                files)))

        (compiler (lambda (msg . args)
            (case msg
                ((load) (apply pc-load args))
                ))))
                ;(else (error "Compiler DNU: " msg args))))))
        compiler)) 
