(load "lambda-compiler.scm")

(display
(transform-code
    (let fib ((x 20))
        (if (< x 1)
            1
            (+ (fib (- x 1))
               (fib (- x 2)))))
))
