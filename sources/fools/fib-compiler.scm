(load "lambda-compiler.scm")

(display
(transform-code
;    (let fib ((x 25))
;        (if (< x 1)
;            1
 ;           (+ (fib (- x 1))
  ;             (fib (- x 2)))))


(let ((getself (lambda (o) (o 'objectAt: 0)))
      (getsuper (lambda (o) (o 'objectAt: 1)))
      (bind (lambda (self super) (vector self super)))
      (methoddict (lambda (c) (c 'objectAt: 1))))
(let ((doesNotUnderstand
        (method (s msg env args)
            (display "Message not understood: ")
            (display msg)
            (display "\n")
            null))
      (oprint (method (s)
                (display "Instance of: ")
                (display (((getself s) 'delegate) 'name))
                (display "\n")
              ))
      (clsname (method (s)
                ((getself s) 'objectAt: 3)))
      (mclsname (method (s)
                (display (((getself s) 'instance) 'name))
                " class"))
      (mclsinstance (method (s)
            ((getself s) 'objectAt: 3)))

    ; Here I define a general dispatching mechanism for objects and classes:
     (lookup
        (lambda (self env args)
            (let lookup ((msg (args 'objectAt: 0))
                         (class (self 'delegate)))
                ;(display "LOOKUP: ")
                ;(display msg)
                ;(display "\n")
                (let loop ((class class))
                    (if (eq? class null)
                        (if (eq? msg 'doesNotUnderstand:in:with:)
                             (display "ERROR Received DNU!\n")
                             (self 'doesNotUnderstand:in:with: msg env args))
                        (let ((amethod (class 'lookup: msg)))
                            (if (eq? amethod null)
                                (loop (class 'superclass))
                                (begin
                                    (args 'objectAt:put: 0
                                        (bind self
                                              ; Constructing a "super"
                                              (lambda (args)
                                                  (lookup
                                                      (args 'objectAt: 0)
                                                      (class 'superclass)))))
                                    (amethod 'apply:in: args env))))))))))
    (display "STAGE 1\n")
    ; Classes have a more specific dispatch than objects
    ; they know where their super is,
    ; and now how to respond to a "lookup:" message.
    (let ((classdisp (dispatch (self env args)
            (let ((msg (args 'objectAt: 0)))
                (case msg
                    ((lookup:)
                     (let ((selector ((args 'objectAt: 1) 'eval: env))
                           (mdict (self 'objectAt: 1)))
                        (mdict 'objectAt: selector)))
                    ((superclass) (self 'objectAt: 0))
                    (else (lookup self env args))))))

          ; Objects just perform a normal lookup
          (objdisp (dispatch (self env args)
            (lookup self env args))))
    (display "STAGE 2\n")

    ; Here we start bootstrapping the meta-hierarchy
    (let* ((buildclass (lambda (cls)
                (ifixed 'dispatch:delegate:size:
                        classdisp cls 4)))
          
          ; The first Metaclass is an instantiatable stub which will become
          ; the real Metaclass later on.
           (metaclass (ifixed 'size: 4))

          ; The Metaclass-class is an instance of metaclass
           (metaclass_class (buildclass (metaclass 'basicNew)))

          ; The Object class is an instance of metaclass too
           (object_class (metaclass 'basicNew))

          ; Object is just a normal class with no instance variables
           (object ((buildclass object_class) 'basicNew))

          ; We use the C implementation of dictionaries for bootstrapping
           (mcdict (dictionary 'basicNew))

          ; The implementation of classNamed:super:instVars:classVars:
          ; which will be installed in the Metaclass class' dictionary so that
          ; it can be called on Metaclass. It generates a new Class and its
          ; corresponding Metaclass.
           (newclass
                (method (s name super instlayout clslayout)
                    (let ((mclass ((getself s) 'new))
                          (class null)
                          (fixclass (lambda (class dispatch)
                              (let loop ((current class)
                                         (size 0))
                                  (if (eq? null current)
                                      (ifixed 'dispatch:delegate:size:
                                               dispatch class size)
                                      (loop (current 'superclass)
                                            (+ size
                                               ((current 'objectAt: 2)
                                                'size))))))))
                       (mclass 'objectAt:put: 0 (super 'delegate))
                       (mclass 'objectAt:put: 1 (dictionary 'basicNew))
                       (mclass 'objectAt:put: 2 clslayout)
                       (set! class ((fixclass mclass classdisp) 'basicNew))
                       (class 'objectAt:put: 0 super)
                       (class 'objectAt:put: 1 (dictionary 'basicNew))
                       (class 'objectAt:put: 2 instlayout)
                       (class 'objectAt:put: 3 name)
                       (let ((class (fixclass class objdisp)))
                          ((mclass 'objectAt: 1) 'objectAt:put: 'basicNew
                                (method (s)
                                    (class 'basicNew))))
                       (mclass 'objectAt:put: 3 class)
                       class)))

            (subclass
                (method (s name instlayout clslayout)
                    (metaclass 'class:super:instvars:classvars:
                        name (getself s) instlayout clslayout))))
        ; Here we fill the empty stub for the Metaclass in with the actual
        ; Metaclass.
        (metaclass 'dispatch:delegate: classdisp (metaclass_class 'basicNew))
        (metaclass_class 'objectAt:put: 1 mcdict)

        (display "STAGE 3\n")

       ; For now we ensure that all subclasses of Object get the correct
       ; layout by faking the layout of the first Metaclass. This will later
       ; be overwritten and the instvars will be spread over "Class class"
       ; and "ClassBehaviour class"
        (metaclass_class 'objectAt:put: 2
            (vector 'superclass
                    'methodDictionary
                    'layout
                    'name))
      
       ; Fill in info about Metaclasses
        (metaclass 'objectAt:put: 1 (dictionary 'basicNew))
        (metaclass 'objectAt:put: 2 (vector 'instance))
        (metaclass 'objectAt:put: 3 'Metaclass)
        (mcdict 'objectAt:put: 'class:super:instvars:classvars: newclass)

       ; Install the accessor methods
        ((methoddict metaclass) 'objectAt:put: 'name mclsname)
        ((methoddict metaclass) 'objectAt:put: 'instance mclsinstance)
        (let ((metaclass metaclass))
            (mcdict 'objectAt:put: 'basicNew
                    (method (s) (metaclass 'basicNew))))

       ; Fill in info about Objects
        (object_class 'objectAt:put: 0 metaclass_class)
        (object_class 'objectAt:put: 1 (dictionary 'basicNew))
        (object_class 'objectAt:put: 2 (vector))
        (object_class 'objectAt:put: 3 object)
        (object 'objectAt:put: 1 (dictionary 'basicNew))
        (object 'objectAt:put: 2 (vector))
        (object 'objectAt:put: 3 'Object)

       ; Install DNU + test methods
        ((methoddict object_class) 'objectAt:put:
            'subclass:instvars:classvars: subclass)
        ((methoddict object) 'objectAt:put: 'print oprint)
        ((methoddict object) 'objectAt:put: 'doesNotUnderstand:in:with:
                                               doesNotUnderstand)
        ((methoddict object) 'objectAt:put: 'class
            (method (s) ((getself s) 'delegate)))

        ((methoddict metaclass_class) 'objectAt:put:
            'new (method (s) ((getself s) 'basicNew)))

        (let ((o (ifixed 'dispatch:delegate:size: objdisp object 0)))
            ((methoddict object_class) 'objectAt:put: 'basicNew
                (method (s) (o 'basicNew))))

       ; Create ClassBehaviour and Class
        (let* ((classBehaviour (object 'subclass:instvars:classvars:
                                       'ClassBehaviour
                                          (vector 'superclass
                                                  'methodDictionary
                                                  'layout)
                                          (vector)))
                (class (classBehaviour 'subclass:instvars:classvars:
                                        'Class
                                        (vector 'name)
                                        (vector))))

            (display "STAGE 4\n")

            ((methoddict class) 'objectAt:put: 'name clsname)
            ((methoddict classBehaviour) 'objectAt:put: 'methodDictionary
                (method (s) ((getself s) 'objectAt: 1)))

            ; Now fix all bootstrap "dangling" pointers
            (metaclass       'objectAt:put: 0 classBehaviour)
            (object_class    'objectAt:put: 0 class)
            (metaclass_class 'objectAt:put: 0 (classBehaviour 'class))
            (metaclass_class 'objectAt:put: 2 (vector))
            
            ; Remove the ifixed indirection for tests.
            (set! metaclass (metaclass_class 'delegate))
            (metaclass_class 'objectAt:put: 3 metaclass)
            ((methoddict metaclass_class) 'objectAt:put:
                'new null)

            ((methoddict object) 'objectAt:put:
                'initialize (method (s) (getself s)))

            ((methoddict classBehaviour) 'objectAt:put:
                'new (method (s)
                        (((getself s) 'basicNew) 'initialize)))

            ;(display "Minimal system ready!\n")

            ;(display "TESTS")
            ;(display (eq? (object 'superclass) null))
            ;(display (eq? (object_class 'superclass) class))
            ;(display (eq? (class 'superclass) classBehaviour))
            ;(display (eq? ((class 'delegate) 'superclass)
            ;              (classBehaviour 'delegate)))
            ;(display (eq? (metaclass_class 'superclass) class))
            ;(display (eq? (metaclass 'superclass) classBehaviour))
            ;(display (eq? (classBehaviour 'superclass) object))
            ;(display (eq? ((classBehaviour 'delegate) 'superclass)
            ;              object_class))
            ;(display (eq? (object_class 'delegate) metaclass))
            ;(display (eq? ((metaclass 'delegate) 'delegate) metaclass))

            ((object 'new) 'print)
            (object 'print)
            (metaclass 'instance)
            (object_class 'basicNew) ; Metaclasses don't have a NEW. The "NEW" is
                                     ; only generated on the spot to create its
                                     ; single instance in "newclass"
            ((class 'new) 'print)

            (display "STAGE 5\n")

        
            (let* ((ev (vector))
                   (magnitude (object 'subclass:instvars:classvars: 'Magnitude ev ev))
                   (number (magnitude 'subclass:instvars:classvars: 'Number ev ev))
                   (integer (number 'subclass:instvars:classvars:   'Integer ev ev))
                   (boolean (object 'subclass:instvars:classvars:   'Boolean ev ev))
                   (true  (boolean 'subclass:instvars:classvars:    'True  ev ev))
                   (false (boolean 'subclass:instvars:classvars:    'False ev ev))
                   (collection (object 'subclass:instvars:classvars: 'Collection ev ev))
                   (sqcollection (collection 'subclass:instvars:classvars:
                                      'SequenceableCollection ev ev))
                   (acollection (sqcollection 'subclass:instvars:classvars:
                                      'ArrayedCollection ev ev))
                   (ocollection (sqcollection 'subclass:instvars:classvars:
                                      'OrderedCollection (vector 1 2 3) ev))
                                                          ; XXX todo :! 
                   (ary (acollection 'subclass:instvars:classvars: 'Array ev ev)))

                ((integer 'methodDictionary)
                    'objectAt:put: 'testMethod
                    (method (s) (display "IN SELF!\n")
                                ((getsuper s) (vector 'testMethod))))
                ((magnitude 'methodDictionary)
                    'objectAt:put: 'testMethod
                    (method (s) (display "In SUPER!!\n")))

                ((integer 'basicNew) 'testMethod)

                (vector magnitude number integer boolean true false collection
                        sqcollection acollection ocollection ary)
    ))))))

))
