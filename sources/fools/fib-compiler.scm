(load "lambda-compiler.scm")

(display
(transform-code
    (< 40 2)
    ;((lambda (fib)
    ;    (set! fib
    ;        (lambda (x)
    ;            (if (< x 1)
    ;                1
    ;                (+ (fib (- x 1))
    ;                   (fib (- x 2))))))
    ;    (fib 30))
    ;  null)
))
