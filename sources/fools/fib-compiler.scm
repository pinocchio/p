(load "lambda-compiler.scm")

(display
(transform-code
    (let fib ((x 25))
        (if (< x 1)
            1
            (+ (fib (- x 1))
               (fib (- x 2)))))
 
; Method lookup.
;(dispatch (self env args)
;    (let ((msg (args 'OBJECT_AT 0)))
;        (args 'OBJECT_AT_PUT 0 self)
;        (let loop ((class ((self 'DISPATCH) 'DELEGATE)))
;            (if (eq? class null)
;                (self 'SYMBOL_doesNotUnderstand msg env args)
;                (let ((method ((class 'OBJECT_AT 1) 'OBJECT_AT msg)))
;                    (if (eq? method null)
;                        (loop (class 'OBJECT_AT 0))
;                        (method 'APPLY (args 'EVAL env))))))))
;(let ((doesNotUnderstand
;        (lambda (self msg env args)
;            msg))
;      (d (dispatch (self env args)
;            (let ((msg (args 'at 0)))
;                (args 'atput 0 self)
;                (let loop ((class ((self 'dispatch) 'delegate)))
;                    (if (eq? class null)
;                        (self 'doesNotUnderstand msg env args)
;                        (let ((method ((class 'at 1) 'at msg)))
;                            (if (eq? method null)
;                                (loop (class 'at 0))
;                                (method 'apply args)))))))))
;    (let* ((cls_if (ifixed 'dispatch:delegate:size: d null 2))
;           (acls (cls_if 'new))
;           (mdict (dict)))
;        (acls 'atput 0 null) ; superclass
;        (acls 'atput 1 mdict) 
;        (mdict 'atput 'doesNotUnderstand doesNotUnderstand)
;        (let* ((o_if (ifixed 'dispatch:delegate:size: d acls 0))
;               (an_o (o_if 'new)))
;            an_o)))
))
