(testsuite "AST tests" (lambda ()
; these tests represent the ast tests from test.c

#|

TODO! Fix tests

(let ((l (ast-list (vector))))
    (assert (= (l 'size) 0))
    (l 'eval))

(let ((l (ast-list (vector 1 2 3 4))))
    (assert (= (l 'size) 4))
    (let loop ((idx 0))
        (assert (= (l 'objectAt: idx) (+ idx 1)))
        (if (< idx (- (l 'size) 1))
            (loop (+ idx 1))
            (begin))))

(let* ((number 42)
       (const (Const 'basicNew: number)))
    (assert (= (const 'eval) number)))

(let* ((number 42)
       (const (Const 'basicNew: number))
       (l (ast-list (vector const))))
    (assert (= (l 'eval) number)))

|#

(let* ((e1k "env1 identifier")
       (e2k "env2 indetifier")
       (v1 "v1")
       (v2 "v2")
       (v3 "v3")
       (env1 (env e1k null 1))
       (env2 (env e2k env1 1)))
    (env1 'store:at:in: v1 0 e1k)
    (assert (eq? (env1 'fetch:from: 0 e1k) v1))
    (assert (eq? (env2 'fetch:from: 0 e1k) v1))

    (env2 'store:at:in: v2 0 e2k)
    (assert (eq? (env1 'fetch:from: 0 e1k) v1))
    (assert (eq? (env2 'fetch:from: 0 e2k) v2))

    (env2 'store:at:in: v3 0 e1k)
    (assert (eq? (env1 'fetch:from: 0 e1k) v3))
    ; TODO add assert-fail here
    ;(assert (eq? (env1 'fetch:from: 0 e2k) v2))
    (assert (eq? (env2 'fetch:from: 0 e2k) v2))
    (assert (eq? (env2 'fetch:from: 0 e1k) v3)))

(let* ((env1 (env null null 1))
       (c (Const 'basicNew: 42))
       (v (ast-var "iv"))
       (assign (Assign 'to:expression: v c)))
    ;(assert (eq? (var 'eval) null))
    ;TODO to be fixed
    ;(display assign)
    ;((Capture 'eval) 'parent: env)
    ;(display (assign 'eval))
    ;(assert (= (v 'eval) c))
    )

))



