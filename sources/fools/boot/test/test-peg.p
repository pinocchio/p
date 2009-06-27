;(display (= 5 (callec (lambda (cont) 5))))

;(display (= 10
;    (callec (lambda (cont)
;                (display "boe\n")
;                (cont 10)
;                (display "bla\n")
;                5))))

;(let ((bla null))
;    (display (+ 10
;            (callec (lambda (cont)
;                (set! bla cont)
;                20))))
;    (display (+ 40 ((lambda (x) (bla 4)) 4))))

;(let ((cls (Object 'subclass:instvars:classvars: 'Boe (vector) (vector))))
;    (cls 'store:method: 'eval (method (s) "EVAL ACTIVATED!\n"))

(display "HERE\n")
(let ((cls (newclass cls Object () ()
            ((eval (s) "EVAL ACTIVADED!\n"))
            ())))
    (display cls)
    (display (eq? ((IScoped 'new:size: (cls 'new) 0) 'scope)
                  ((ICapture 'instance) 'eval)))
 
    (let ((test (IScoped 'new:size: (cls 'new) 0)))
        (display "going to eval\n")
        (display (test 'apply:in: (vector) ((ICapture 'instance) 'eval)))
        (display "done one\n")
        (let ((test2 (test 'shift)))
            (display (test2))))
)
