(load "lambda-compiler.scm")

(display
(transform-code
    (let fib ((x 20))
        (if (< x 1)
            1
            (+ (fib (- x 1))
               (fib (- x 2)))))

;; Method lookup.
;(dispatch (self args)
;    (let ((msg (args 'at 0)))
;        (args 'atput 0 self)
;        (let loop ((class ((self 'dispatch) 'delegate)))
;            (if (eq? class null)
;                (self 'doesNotUnderstand msg args)
;                (let ((method ((class 'at 2) 'lookup msg)))
;                    (if method
;                        (method 'execute args)
;                        (loop (class 'at 1))))))))
))
