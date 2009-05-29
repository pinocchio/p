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
        (if (eq? msg 'SYMBOL_class)
            (self 'DELEGATE)
            (args 'OBJECT_AT_PUT 0 self)
            (let loop ((class (self 'DELEGATE)))
                (if (eq? class null)
                    (self 'SYMBOL_doesNotUnderstand msg env args)
                    (let ((amethod ((class 'OBJECT_AT 1) 'OBJECT_AT msg)))
                        (if (eq? amethod null)
                            (loop (class 'OBJECT_AT 0))
                            (amethod 'APPLY_IN args env))))))))

    (let* ((cls_if (ifixed 'DISPATCH_DELEGATE_SIZE classdisp null 2))
           (acls (cls_if 'NEW))
           (mdict (dictionary 'NEW)))
        (acls 'OBJECT_AT_PUT 0 null) ; superclass
        (acls 'OBJECT_AT_PUT 1 mdict) 
        (mdict 'OBJECT_AT_PUT 'SYMBOL_doesNotUnderstand doesNotUnderstand)
        (let* ((o_if (ifixed 'DISPATCH_DELEGATE_SIZE objdisp acls 0))
               (an_o (o_if 'NEW)))
            (an_o 'NEW))) ; should invoke DNU with "basicNew"
|#

(let ((doesNotUnderstand
        (method (self msg env args)
            (display "Message not understood: ")
            (display msg)
            null))
      (oprint (method (self)
                (display "Instance of: ")
                (display ((self 'SYMBOL_class) 'SYMBOL_name))
                (display " .... done.")
              ))
      (clsname (method (self)
                (self 'OBJECT_AT 3)))
      (mclsname (method (self)
                "... class"))
      (lookup 
        (lambda (self env args)
            (let ((msg (args 'OBJECT_AT 0)))
                ;(display msg)
                (if (eq? msg 'SYMBOL_class)
                    (self 'DELEGATE)
                    (begin
                        (args 'OBJECT_AT_PUT 0 self)
                        (let loop ((class (self 'DELEGATE)))
                            (if (eq? class null)
                                (self 'SYMBOL_doesNotUnderstand msg env args)
                                (let ((amethod (class 'SYMBOL_lookup msg)))
                                    (if (eq? amethod null)
                                        (loop (class 'SYMBOL_super))
                                        (amethod 'APPLY_IN args env)))))))))))
    (display "STAGE 1")
    (let ((classdisp (dispatch (self env args)
            (let ((msg (args 'OBJECT_AT 0)))
                (case msg
                    ((SYMBOL_lookup)
                     (let ((selector ((args 'OBJECT_AT 1) 'PRE_EVAL_ENV env))
                           (mdict (self 'OBJECT_AT 1)))
                        (mdict 'OBJECT_AT selector)))
                    ((SYMBOL_super) (self 'OBJECT_AT 0))
                    (else (lookup self env args))))))
          (objdisp (dispatch (self env args)
            (lookup self env args))))
    (display "STAGE 2")
    (let* ((buildclass (lambda (cls)
                (ifixed 'DISPATCH_DELEGATE_SIZE
                        classdisp cls 4)))
           (metaclass_stub (buildclass null))
           (metaclass_class (buildclass (metaclass_stub 'NEW)))
           (metaclass (buildclass (metaclass_class 'NEW)))
           (object_class (buildclass (metaclass_stub 'NEW)))
           (object (buildclass (object_class 'NEW)))
           (mcdict (dictionary 'NEW)) 

           (newclass
                (method (self name super instlayout clslayout)
                    (display "GENERATING NEW CLASS")
                    (let ((mclass (metaclass 'NEW))
                          (class null)
                          (fixclass (lambda (class dispatch)
                              (let loop ((current class)
                                         (size 0))
                                  (if (eq? null current)
                                      (begin
                                        (display "Making class of size: ")
                                        (display size)
                                        (ifixed 'DISPATCH_DELEGATE_SIZE
                                                dispatch class size))
                                      (loop (current 'SYMBOL_super)
                                          (+ size
                                             ((current 'OBJECT_AT 2)
                                              'SIZE))))))))
                       (mclass 'OBJECT_AT_PUT 0 (super 'SYMBOL_class))
                       (mclass 'OBJECT_AT_PUT 1 (dictionary 'NEW)) 
                       (mclass 'OBJECT_AT_PUT 2 clslayout)
                       (set! mclass (fixclass mclass classdisp))
                       (set! class (mclass 'NEW))
                       (class 'OBJECT_AT_PUT 0 super)
                       (class 'OBJECT_AT_PUT 1 (dictionary 'NEW))
                       (class 'OBJECT_AT_PUT 2 instlayout)
                       (class 'OBJECT_AT_PUT 3 name)
                       (set! class (fixclass class objdisp))
                       (mclass 'OBJECT_AT_PUT 3 class)
                       class)))
           )
        (display "STAGE 3")
        (metaclass_class 'OBJECT_AT_PUT 1 mcdict)
        (metaclass_class 'OBJECT_AT_PUT 2
            (vector 'SYMBOL_super
                    'SYMBOL_methodDict
                    'SYMBOL_layout
                    'SYMBOL_name))
        (metaclass_class 'OBJECT_AT_PUT 3 metaclass)
        (metaclass 'OBJECT_AT_PUT 1 (dictionary 'NEW))
        (metaclass 'OBJECT_AT_PUT 2 (vector 'SYMBOL_instance))
        (metaclass 'OBJECT_AT_PUT 3 "Metaclass")
        (mcdict 'OBJECT_AT_PUT 'SYMBOL_new newclass)
        ((metaclass 'OBJECT_AT 1) 'OBJECT_AT_PUT 'SYMBOL_name mclsname)

        (object_class 'OBJECT_AT_PUT 0 metaclass_class)
        (object_class 'OBJECT_AT_PUT 1 (dictionary 'NEW))
        ((object_class 'OBJECT_AT 1) 'OBJECT_AT_PUT 'SYMBOL_name  clsname)
        (object_class 'OBJECT_AT_PUT 2 (vector))
        (object_class 'OBJECT_AT_PUT 3 object)
        (object 'OBJECT_AT_PUT 1 (dictionary 'NEW))
        ((object 'OBJECT_AT 1) 'OBJECT_AT_PUT 'SYMBOL_print oprint)
        (object 'OBJECT_AT_PUT 2 (vector))
        (object 'OBJECT_AT_PUT 3 "Object")
                                
        (display "GOING TO SEND")
        (display metaclass_class)

        (let ((classBehaviour null)
              (class null))
            (display "STAGE 5")
            (set! classBehaviour (metaclass 'SYMBOL_new
                                    "ClassBehaviour" object
                                    (vector 'SYMBOL_super
                                            'SYMBOL_methodDict
                                            'SYMBOL_layout)
                                    (vector)))
            (set! class (metaclass 'SYMBOL_new
                            "Class" classBehaviour
                            (vector 'SYMBOL_name)
                            (vector)))
            (metaclass       'OBJECT_AT_PUT 0 classBehaviour)
            (metaclass_class 'OBJECT_AT_PUT 0 object_class)
            (metaclass_class 'OBJECT_AT_PUT 2 (vector))
            (object_class    'OBJECT_AT_PUT 0 class)
            (display "TESTS")
            (display (eq? (object 'SYMBOL_super) null))
            (display (eq? (object_class 'SYMBOL_super) class))
            (display (eq? (class 'SYMBOL_super) classBehaviour))
            (display (eq? ((class 'DELEGATE) 'SYMBOL_super)
                          (classBehaviour 'DELEGATE)))
            (display (eq? (metaclass_class 'SYMBOL_super) object_class))
            (display (eq? (metaclass 'SYMBOL_super) classBehaviour))
            (display (eq? (classBehaviour 'SYMBOL_super) object))
            (display (eq? ((classBehaviour 'DELEGATE) 'SYMBOL_super)
                          object_class))
            (display (eq? (object_class 'DELEGATE) metaclass))
            ((object 'NEW) 'SYMBOL_print)))))

))
