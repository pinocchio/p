(load "lambda-compiler.scm")

(display
(transform-code
    ;(+ (+ (+ 20 5) 10) (+ 10 59))
    ;(< 40 2)
    ;((lambda (test)
    ;    (if (< 10 20)
    ;        test
    ;        (+ 10 20)))
    ;    null)
    ((lambda (fib)
        (set! fib
            (lambda (x)
                (if (< x 1)
                    1
                    (+ (fib (- x 1))
                       (fib (- x 2))))))
        (fib 23))
      null)
))
