(load "lambda-compiler.scm")

(display
(transform-code
    ((lambda (fib)
        (set! fib
            (lambda (x)
                (if (< x 1)
                    1
                    (+ (fib (- x 1)
                            (- x 2))))))
        (fib 20))
      null))
)
