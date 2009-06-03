(load "lambda-compiler.scm")

(display
(transform-code
;    (let fib ((x 25))
;        (if (< x 1)
;            1
 ;           (+ (fib (- x 1))
  ;             (fib (- x 2)))))
 
(let ((getself (lambda (o) (o 'OBJECT_AT 0)))
      (getsuper (lambda (o) (o 'OBJECT_AT 1)))
      (bind (lambda (self super) (vector self super))))
(let ((doesNotUnderstand
        (method (s msg env args)
            (display "Message not understood: ")
            (display msg)
            (display "\\n")
            null))
      (oprint (method (s)
                (display "Instance of: ")
                (display (((getself s) 'DELEGATE) 'SYMBOL_name))
                (display "\\n")
              ))
      (clsname (method (s)
                ((getself s) 'OBJECT_AT 3)))
      (mclsname (method (s)
                (display (((getself s) 'SYMBOL_instance) 'SYMBOL_name))
                " class"))
      (mclsinstance (method (s)
            ((getself s) 'OBJECT_AT 3)))

    ; Here I define a general dispatching mechanism for objects and classes:
     (lookup
        (lambda (self env args)
            (let lookup ((msg (args 'OBJECT_AT 0))
                         (class (self 'DELEGATE)))
                ;(display "LOOKUP: ")
                ;(display msg)
                ;(display "\\n")
                (let loop ((class class))
                    (if (eq? class null)
                        (if (eq? msg 'SYMBOL_doesNotUnderstand)
                             (display "ERROR Received DNU!")
                             (self 'SYMBOL_doesNotUnderstand msg env args))
                        (let ((amethod (class 'SYMBOL_lookup msg)))
                            (if (eq? amethod null)
                                (loop (class 'SYMBOL_super))
                                (begin
                                    (args 'OBJECT_AT_PUT 0
                                        (bind self
                                              ; Constructing a "super"
                                              (lambda (args)
                                                  (lookup (args 'OBJECT_AT 0)
                                                      (class 'SYMBOL_super)))))
                                    (amethod 'APPLY_IN args env))))))))))
    ;(display "STAGE 1")
    ; Classes have a more specific dispatch than objects
    ; they know where their super is,
    ; and now how to respond to a "lookup:" message.
    (let ((classdisp (dispatch (self env args)
            (let ((msg (args 'OBJECT_AT 0)))
                (case msg
                    ((SYMBOL_lookup)
                     (let ((selector ((args 'OBJECT_AT 1) 'PRE_EVAL_ENV env))
                           (mdict (self 'OBJECT_AT 1)))
                        (mdict 'OBJECT_AT selector)))
                    ((SYMBOL_super) (self 'OBJECT_AT 0))
                    (else (lookup self env args))))))

          ; Objects just perform a normal lookup
          (objdisp (dispatch (self env args)
            (lookup self env args))))
    ;(display "STAGE 2")

    ; Here we start bootstrapping the meta-hierarchy
    (let* ((buildclass (lambda (cls)
                (ifixed 'DISPATCH_DELEGATE_SIZE
                        classdisp cls 4)))
          
          ; The first Metaclass is an instantiatable stub which will become
          ; the real Metaclass later on.
           (metaclass (ifixed_stub 'DISPATCH_SIZE classdisp 4))

          ; The Metaclass-class is an instance of metaclass
           (metaclass_class (buildclass (metaclass 'NEW)))

          ; The Object class is an instance of metaclass too
           (object_class (metaclass 'NEW))

          ; Object is just a normal class with no instance variables
           (object ((buildclass object_class) 'NEW))

          ; We use the C implementation of dictionaries for bootstrapping
           (mcdict (dictionary 'NEW))

          ; The implementation of classNamed:super:instVars:classVars:
          ; which will be installed in the Metaclass class' dictionary so that
          ; it can be called on Metaclass. It generates a new Class and its
          ; corresponding Metaclass.
           (newclass
                (method (s name super instlayout clslayout)
                    (let ((mclass ((getself s) 'NEW))
                          (class null)
                          (fixclass (lambda (class dispatch)
                              (let loop ((current class)
                                         (size 0))
                                  (if (eq? null current)
                                      (ifixed 'DISPATCH_DELEGATE_SIZE
                                               dispatch class size)
                                      (loop (current 'SYMBOL_super)
                                          (+ size
                                             ((current 'OBJECT_AT 2)
                                              'SIZE))))))))
                       (mclass 'OBJECT_AT_PUT 0 (super 'DELEGATE))
                       (mclass 'OBJECT_AT_PUT 1 (dictionary 'NEW))
                       (mclass 'OBJECT_AT_PUT 2 clslayout)
                       (set! class ((fixclass mclass classdisp) 'NEW))
                       (class 'OBJECT_AT_PUT 0 super)
                       (class 'OBJECT_AT_PUT 1 (dictionary 'NEW))
                       (class 'OBJECT_AT_PUT 2 instlayout)
                       (class 'OBJECT_AT_PUT 3 name)
                       (let ((class (fixclass class objdisp)))
                          ((mclass 'OBJECT_AT 1) 'OBJECT_AT_PUT 'NEW
                                (method (s)
                                    (class 'NEW))))
                       (mclass 'OBJECT_AT_PUT 3 class)
                       class)))

            (subclass
                (method (s name instlayout clslayout)
                    (metaclass 'SYMBOL_new name (getself s) instlayout clslayout))))
        ; Here we fill the empty stub for the Metaclass in with the actual
        ; Metaclass.
        (metaclass 'SET_DELEGATE (metaclass_class 'NEW))
        (metaclass_class 'OBJECT_AT_PUT 1 mcdict)

       ; For now we ensure that all subclasses of Object get the correct
       ; layout by faking the layout of the first Metaclass. This will later
       ; be overwritten and the instvars will be spread over "Class class"
       ; and "ClassBehaviour class"
        (metaclass_class 'OBJECT_AT_PUT 2
            (vector 'SYMBOL_super
                    'SYMBOL_methodDict
                    'SYMBOL_layout
                    'SYMBOL_name))
      
       ; Fill in info about Metaclasses
        (metaclass 'OBJECT_AT_PUT 1 (dictionary 'NEW))
        (metaclass 'OBJECT_AT_PUT 2 (vector 'SYMBOL_instance))
        (metaclass 'OBJECT_AT_PUT 3 "Metaclass")
        (mcdict 'OBJECT_AT_PUT 'SYMBOL_new newclass)

       ; Install the accessor methods
        ((metaclass 'OBJECT_AT 1) 'OBJECT_AT_PUT 'SYMBOL_name mclsname)
        ((metaclass 'OBJECT_AT 1) 'OBJECT_AT_PUT 'SYMBOL_instance mclsinstance)
        (let ((metaclass metaclass))
            (mcdict 'OBJECT_AT_PUT 'NEW
                    (method (s) (metaclass 'NEW))))

       ; Fill in info about Objects
        (object_class 'OBJECT_AT_PUT 0 metaclass_class)
        (object_class 'OBJECT_AT_PUT 1 (dictionary 'NEW))
        (object_class 'OBJECT_AT_PUT 2 (vector))
        (object_class 'OBJECT_AT_PUT 3 object)
        (object 'OBJECT_AT_PUT 1 (dictionary 'NEW))
        (object 'OBJECT_AT_PUT 2 (vector))
        (object 'OBJECT_AT_PUT 3 "Object")

       ; Install DNU + test methods
        ((object_class 'OBJECT_AT 1) 'OBJECT_AT_PUT 'SYMBOL_subclass subclass)
        ((object 'OBJECT_AT 1) 'OBJECT_AT_PUT 'SYMBOL_print oprint)
        ((object 'OBJECT_AT 1) 'OBJECT_AT_PUT 'SYMBOL_doesNotUnderstand
                                               doesNotUnderstand)
        ((object 'OBJECT_AT 1) 'OBJECT_AT_PUT 'SYMBOL_class
                                              (method (s) ((getself s) 'DELEGATE)))
        (let ((o (ifixed 'DISPATCH_DELEGATE_SIZE
                                objdisp object 0)))
            ((object_class 'OBJECT_AT 1) 'OBJECT_AT_PUT 'NEW
                (method (s) (o 'NEW))))
                               
       ; Create ClassBehaviour and Class
        (let* ((classBehaviour (metaclass 'SYMBOL_new
                                          "ClassBehaviour" object
                                          (vector 'SYMBOL_super
                                                  'SYMBOL_methodDict
                                                  'SYMBOL_layout)
                                          (vector)))
                (class (metaclass 'SYMBOL_new
                                  "Class" classBehaviour
                                  (vector 'SYMBOL_name)
                                  (vector))))

            ((class 'OBJECT_AT 1) 'OBJECT_AT_PUT 'SYMBOL_name clsname)
            ((classBehaviour 'OBJECT_AT 1) 'OBJECT_AT_PUT 'SYMBOL_methodDict
                (method (s) ((getself s) 'OBJECT_AT 1)))

            ; Now fix all bootstrap "dangling" pointers
            (metaclass       'OBJECT_AT_PUT 0 classBehaviour)
            (metaclass_class 'OBJECT_AT_PUT 0 class)
            (metaclass_class 'OBJECT_AT_PUT 2 (vector))
            (object_class    'OBJECT_AT_PUT 0 class)
            
            ; Remove the ifixed indirection for tests.
            (set! metaclass (metaclass_class 'DELEGATE))
            (metaclass_class 'OBJECT_AT_PUT 3 metaclass)

            ;(display "TESTS")
            (display (eq? (object 'SYMBOL_super) null))
            (display (eq? (object_class 'SYMBOL_super) class))
            (display (eq? (class 'SYMBOL_super) classBehaviour))
            (display (eq? ((class 'DELEGATE) 'SYMBOL_super)
                          (classBehaviour 'DELEGATE)))
            (display (eq? (metaclass_class 'SYMBOL_super) class))
            (display (eq? (metaclass 'SYMBOL_super) classBehaviour))
            (display (eq? (classBehaviour 'SYMBOL_super) object))
            (display (eq? ((classBehaviour 'DELEGATE) 'SYMBOL_super)
                          object_class))
            (display (eq? (object_class 'DELEGATE) metaclass))
            (display (eq? ((metaclass 'DELEGATE) 'DELEGATE) metaclass))

            ((object 'NEW) 'SYMBOL_print)
            (object 'SYMBOL_print)
            (metaclass 'SYMBOL_instance)
            (object_class 'NEW) ; Metaclasses don't have a NEW. The "NEW" is
                                ; only generated on the spot to create its
                                ; single instance in "newclass"
            ((class 'NEW) 'SYMBOL_print)
        
            (let* ((ev (vector))
                   (magnitude (object 'SYMBOL_subclass "Magnitude" ev ev))
                   (number (magnitude 'SYMBOL_subclass "Number" ev ev))
                   (integer (number 'SYMBOL_subclass   "Integer" ev ev))
                   (boolean (object 'SYMBOL_subclass   "Boolean" ev ev))
                   (true  (boolean 'SYMBOL_subclass "True"  ev ev))
                   (false (boolean 'SYMBOL_subclass "False" ev ev))
                   (collection (object 'SYMBOL_subclass "Collection" ev ev))
                   (sqcollection (collection 'SYMBOL_subclass
                                      "SequenceableCollection" ev ev))
                   (acollection (sqcollection 'SYMBOL_subclass
                                      "ArrayedCollection" ev ev))
                   (ocollection (sqcollection 'SYMBOL_subclass
                                      "OrderedCollection" (vector 1 2 3) ev))
                                                          ; XXX todo :! 
                   (ary (acollection 'SYMBOL_subclass "Array" ev ev)))

                ((integer 'SYMBOL_methodDict)
                    'OBJECT_AT_PUT 'SYMBOL_bind
                    (method (s) (display "IN SELF!\\n")
                                ((getsuper s) (vector 'SYMBOL_bind))))
                ((magnitude 'SYMBOL_methodDict)
                    'OBJECT_AT_PUT 'SYMBOL_bind
                    (method (s) (display "In SUPER!!\\n")))

                ((integer 'NEW) 'SYMBOL_bind)

                (vector magnitude number integer boolean true false collection
                        sqcollection acollection ocollection ary)
    ))))))

))
