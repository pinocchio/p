(load "lambda-compiler.scm")

(display
(transform-code
    (let fib ((x 20))
        (if (< x 1)
            1
            (+ (fib (- x 1))
               (fib (- x 2)))))

; Method lookup.
;(lambda (self msg args)
;    (let loop ((class (self 'class)))
;        (if (eq? class null)
;            (self 'doesNotUnderstand msg args)
;            (let ((method (class 'lookup msg)))
;                (if method
;                    ((method 'bind self) 'execute args)
;                    (loop (class 'super)))))))
))
