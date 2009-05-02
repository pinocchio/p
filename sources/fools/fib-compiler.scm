(load "lambda-compiler.scm")

(display
(transform-code
    (+ (+ 20 5) 10)
    ;(< 40 2)
    ;(if (< 20 4) 20 10)
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
