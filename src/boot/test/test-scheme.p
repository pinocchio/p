(testsuite "Scheme tests" (lambda ()

(let ((a (cons 1 (cons 2 (cons 3 null))))
      (b (cons 4 (cons 5 (cons 6 null)))))
    (assert (= 3 (length a)))
    (assert (= 6 (length (append a b))))
    (assert (= 4 (car (cdr (cdr (cdr (append a b)))))))
)
))
