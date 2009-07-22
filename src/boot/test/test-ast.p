(display "AST tests\n")
; these tests represent the ast tests from test.c
(let ((l (ast-list (vector))))
    (display (= (l 'size) 0))
    (l 'eval))

(let ((l (ast-list (vector 1 2 3 4))))
    (display (= (l 'size) 4))
    (let loop ((idx 0))
        (display (= (l 'objectAt: idx) (+ idx 1)))
        (if (< idx (- (l 'size) 1))
            (loop (+ idx 1))
            (begin))))

(let* ((number 42)
       (const (ast-const number)))
    (display (= (const 'eval) number)))

(let* ((number 42)
       (const (ast-const number))
       (l (ast-list (vector const))))
    (display (= (l 'eval) number)))

(let* ((e1k "env1 identifier")
       (e2k "env2 indetifier")
       (v1 "v1")
       (v2 "v2")
       (v3 "v3")
       (env1 (env 'scopeId:size: e1k 1))
       (env2 (env 'scopeId:size: e2k 1)))
    
    )

