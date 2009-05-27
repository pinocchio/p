(load "lambda-compiler.scm")

(display
(transform-code
;    (let fib ((x 25))
;        (if (< x 1)
;            1
 ;           (+ (fib (- x 1))
  ;             (fib (- x 2)))))
 
; Method lookup.
#|(dispatch (self env args)
    (let ((msg (args 'OBJECT_AT 0)))
        (args 'OBJECT_AT_PUT 0 self)
        (let loop ((class (self 'DELEGATE)))
            (if (eq? class null)
                (self 'SYMBOL_doesNotUnderstand msg env args)
                (let ((amethod ((class 'OBJECT_AT 1) 'OBJECT_AT msg)))
                    (if (eq? amethod null)
                        (loop (class 'OBJECT_AT 0))
                        (amethod 'APPLY_IN args env)))))))
|#
(let ((doesNotUnderstand
        (method (self msg env args)
            msg))
      (d (dispatch (self env args)
        (let ((msg (args 'OBJECT_AT 0)))
            (args 'OBJECT_AT_PUT 0 self)
            (let loop ((class (self 'DELEGATE)))
                (if (eq? class null)
                    (self 'SYMBOL_doesNotUnderstand msg env args)
                    (let ((amethod ((class 'OBJECT_AT 1) 'OBJECT_AT msg)))
                        (if (eq? amethod null)
                            (loop (class 'OBJECT_AT 0))
                            (amethod 'APPLY_IN args env)))))))))
    (let* ((cls_if (ifixed 'DISPATCH_DELEGATE_SIZE d null 2))
           (acls (cls_if 'NEW))
           (mdict (dictionary 'NEW)))
        (acls 'OBJECT_AT_PUT 0 null) ; superclass
        (acls 'OBJECT_AT_PUT 1 mdict) 
        (mdict 'OBJECT_AT_PUT 'SYMBOL_doesNotUnderstand doesNotUnderstand)
        (let* ((o_if (ifixed 'DISPATCH_DELEGATE_SIZE d acls 0))
               (an_o (o_if 'NEW)))
            (an_o 'NEW)))) ; should yield "basicNew" from DNU
))
