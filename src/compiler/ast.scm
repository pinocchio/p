(include "tools.scm")

(define (new-environment . parent)
    (unless (null? parent)
        (set! parent (car parent)))
    (letrec (
        (bindings '())
        (code (new-ast-list))
        (lookup (lambda (var)
            (let ((result (assoc var bindings)))
                (if result
                    (cadr result)
                    (if (null? parent)
                        #f
                        (parent 'lookup var))))))
        (bind (lambda (var value)
            (let ((binding (assoc var bindings)))
                (if binding
                    (set-cadr! binding value)
                    (set! bindings (cons (list var value) bindings))))))
        (self (lambda (msg . args)
            (case msg
                ((lookup) (apply lookup args))
                ((bind) (apply bind args))
                ((addCode) (apply code (cons 'add args)))
                (else (error "Environment does not understand: "
                            msg args))))))
        self))

(define (new-lambda syntax args . body)
    (letrec (
        (self (lambda (msg . args)
            (case msg
                ((toCode) (error "TODO"))
                ((constant?) #f)
                ((assignable?) #f)
                ((apply) (apply transform-apply (cons self args)))
                (else (error "Lambda does not understand: " msg args))))))
        self))

(define (new-var syntax name)
    (letrec (
        (self (lambda (msg . args)
            (case msg
                ((toCode) (error "TODO"))
                ((constant?) #f)
                ((assignable?) #t)
                ((apply) (apply transform-apply (cons self args)))
                (else (error "Variable does not understand: " msg args))))))
        self))

(define (new-assign syntax variable expression)
    (letrec (
        (self (lambda (msg . args)
            (case msg
                ((toCode) (error "TODO"))
                ((constant?) #f)
                ((assignable?) #f)
                ((apply) (apply transform-apply (cons self args)))
                (else (error "Assign does not understand: " msg args))))))
        self))

(define (new-vector syntax expressions)
    (letrec (
        (self (lambda (msg . args)
            (case msg
                ((toCode) (error "TODO"))
                ((constant?) #f)
                ((assignable?) #f)
                ((apply) (apply transform-apply (cons self args)))
                (else (error "Vector does not understand: " msg args))))))
        self))

(define (new-list syntax expressions)
    (letrec (
        (self (lambda (msg . args)
            (case msg
                ((toCode) (error "TODO"))
                ((constant?) #f)
                ((assignable?) #f)
                ((apply) (apply transform-apply (cons self args)))
                (else (error "List does not understand: " msg args))))))
        self))

(define (new-ast-list . exps)
    (letrec (
        (expressions (apply new-collection exps))
        (self (lambda (msg . args)
            (case msg
                ((toCode) (error "TODO"))
                ((add) (apply expressions (cons msg args)))
                ((apply) (apply transform-apply (cons self args)))
                ((constant?) #f)
                ((assignable?) #f)
                (else (error "AstList does not understand: " msg args))))))
        self))

(define (new-string str)
    (letrec (
        (self (lambda (msg . args)
            (case msg
                ((toCode) (error "TODO"))
                ((constant?) #f)
                ((assignable?) #f)
                ((apply) (apply transform-apply (cons self args)))
                (else (error "String does not understand: " msg args))))))
        self))

(define (new-number num)
    (letrec (
        (self (lambda (msg . args)
            (case msg
                ((toCode) (error "TODO"))
                ((constant?) #t)
                ((assignable?) #f)
                ((apply) (apply transform-apply (cons self args)))
                (else (error "Number does not understand: " msg args))))))
        self))

(define (new-char char)
    (letrec (
        (self (lambda (msg . args)
            (case msg
                ((toCode) (error "TODO"))
                ((constant?) #t)
                ((assignable?) #f)
                ((apply) (apply transform-apply (cons self args)))
                (else (error "Character does not understand: " msg args))))))
        self))

(define (new-bool bool)
    (letrec (
        (self (lambda (msg . args)
            (case msg
                ((toCode) (error "TODO"))
                ((constant?) #t)
                ((assignable?) #f)
                ((apply) (apply transform-apply (cons self args)))
                (else (error "Bool does not understand: " msg args))))))
        self))

(define (new-application syntax receiver arguments)
    (letrec (
        (self (lambda (msg . args)
            (case msg
                ((toCode) (error "TODO"))
                ((assignable?) #f)
                (else (error "Application does not understand: " msg args))))))
    self))

(define symbol
    (let ((symbols '()))
        (define (make-symbol sym)
            (letrec (
                (self (lambda (msg . args)
                    (case msg
                        ((toCode) (error "TODO"))
                        ((constant?) #t)
                        ((assignable?) #f)
                        ((apply) (apply transform-apply (cons self args)))
                        (else (error "Symbol does not understand: "
                                    msg args))))))
                    self))
        (define (new symbol)
            (let ((result (assoc symbol symbols)))
                (unless result
                    (set! symbols
                        (cons (list symbol (make-symbol symbol)) symbols)))
                (cadr (assoc symbol symbols))))
        (lambda (msg . args)
            (case msg
                ((new) (apply new args))
                (else (error "Symbol class does not understand: "
                            msg args))))))

(define native
    (let ((natives '()))
        (define (make-native symbol native)
            (letrec (
                
                (self (lambda (msg . args)
                    (case msg
                        ((toCode) native)
                        ((constant?) #t)
                        ((assignable?) #f)
                        ((apply) (apply transform-apply (cons self args)))
                        (else (error "Native does not understand: "
                            msg args))))))
                self))
        (define (bind symbol native)
            (let ((result (assoc symbol natives)))
                (when result
                    (error "Duplicate native: " symbol native))
                (set! natives
                    (cons (list symbol (make-native symbol native))
                          natives))))
        (define (lookup symbol)
            (let ((result (assoc symbol natives)))
                (if result
                    (cadr result)
                    result)))
        (lambda (msg . args)
            (case msg
                ((bind) (apply bind args))
                ((lookup) (apply lookup args))
                (else (error "Natives class does not understand: "
                            msg args))))))
