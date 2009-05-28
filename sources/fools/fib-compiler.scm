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
      (lookup 
        (lambda (self env args)
            (let ((msg (args 'OBJECT_AT 0)))
                (args 'OBJECT_AT_PUT 0 self)
                (let loop ((class (self 'DELEGATE)))
                    (if (eq? class null)
                        (self 'SYMBOL_doesNotUnderstand msg env args)
                        (let ((amethod (class 'SYMBOL_lookup msg)))
                            (if (eq? amethod null)
                                (loop (class 'SYMBOL_super))
                                (amethod 'APPLY_IN args env)))))))))
    (let ((cd (dispatch (self env args)
                (let ((msg (args 'OBJECT_AT 0)))
                    (case msg
                        ((SYMBOL_lookup)
                         (let ((selector ((args 'OBJECT_AT 1) 'PRE_EVAL_ENV env))
                               (mdict (self 'OBJECT_AT 1)))
                            (mdict 'OBJECT_AT selector)))
                        ((SYMBOL_super) (self 'OBJECT_AT 0))
                        (else (lookup self env args))))))
          (d (dispatch (self env args)
            (lookup self env args))))
    (let* ((cls_if (ifixed 'DISPATCH_DELEGATE_SIZE cd null 2))
           (acls (cls_if 'NEW))
           (mdict (dictionary 'NEW)))
        (acls 'OBJECT_AT_PUT 0 null) ; superclass
        (acls 'OBJECT_AT_PUT 1 mdict) 
        (mdict 'OBJECT_AT_PUT 'SYMBOL_doesNotUnderstand doesNotUnderstand)
        (let* ((o_if (ifixed 'DISPATCH_DELEGATE_SIZE d acls 0))
               (an_o (o_if 'NEW)))
            (an_o 'NEW))))) ; should yield "basicNew" from DNU
))
