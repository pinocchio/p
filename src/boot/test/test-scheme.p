(display "\nScheme tests\n")

(let ((a (cons 1 (cons 2 (cons 3 null))))
      (b (cons 4 (cons 5 (cons 6 null)))))
    (display (= 3 (length a)))
    (display (= 6 (length (append a b))))
    (display (= 4 (car (cdr (cdr (cdr (append a b)))))))
)
