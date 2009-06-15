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
(let ((Object 
(let ((doesNotUnderstand
        (method (s msg env args)
            (display "Message not understood: ")
            (display msg)
            (display " in: ")
            (display (getself s))
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

    ; Here I define a general dispatching mechanism for Objects and classes:
     (lookup
        (lambda (self env args)
            (let lookup ((msg ((args 'objectAt: 0) 'eval: env))
                         (class (self 'delegate))
                         (args args))
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
                                              ; XXX TODO this is broken!
                                              ; The args get evaluated in the
                                              ; wrong scope
                                              (lambda (args)
                                                  (lookup
                                                      (args 'objectAt: 0)
                                                      (class 'superclass)
                                                      args))))
                                    (amethod 'apply:in: args env))))))))))
    ;(display "STAGE 1\n")
    ; Classes have a more specific dispatch than Objects
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
    ;(display "STAGE 2\n")

    ; Here we start bootstrapping the meta-hierarchy
    (let* ((buildclass (lambda (cls)
                (ifixed 'dispatch:delegate:size:
                        classdisp cls 4)))
          
          ; The first Metaclass is an instantiatable stub which will become
          ; the real Metaclass later on.
           (Metaclass (ifixed 'size: 4))

          ; The Metaclass-class is an instance of Metaclass
           (Metaclass_class (buildclass (Metaclass 'basicNew)))

          ; The Object class is an instance of Metaclass too
           (Object_class (Metaclass 'basicNew))

          ; Object is just a normal class with no instance variables
           (Object ((buildclass Object_class) 'basicNew))

          ; We use the C implementation of dictionaries for bootstrapping
           (mcdict (Dictionary 'basicNew))

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
                       (mclass 'objectAt:put: 1 (Dictionary 'basicNew))
                       (mclass 'objectAt:put: 2 clslayout)
                       (set! class ((fixclass mclass classdisp) 'basicNew))
                       (class 'objectAt:put: 0 super)
                       (class 'objectAt:put: 1 (Dictionary 'basicNew))
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
                    (Metaclass 'class:super:instvars:classvars:
                        name (getself s) instlayout clslayout))))
        ; Here we fill the empty stub for the Metaclass in with the actual
        ; Metaclass.
        (Metaclass 'dispatch:delegate: classdisp (Metaclass_class 'basicNew))
        (Metaclass_class 'objectAt:put: 1 mcdict)

        ;(display "STAGE 3\n")

        ; For now we ensure that all subclasses of Object get the correct
        ; layout by faking the layout of the first Metaclass. This will later
        ; be overwritten and the instvars will be spread over "Class class"
        ; and "ClassBehaviour class"
        (Metaclass_class 'objectAt:put: 2
            (vector 'superclass
                    'methodDictionary
                    'layout
                    'name))

        ; Fill in info about Metaclasses
        (Metaclass 'objectAt:put: 1 (Dictionary 'basicNew))
        (Metaclass 'objectAt:put: 2 (vector 'instance))
        (Metaclass 'objectAt:put: 3 'Metaclass)
        (mcdict 'objectAt:put: 'class:super:instvars:classvars: newclass)


        ; Install the accessor methods
        ((methoddict Metaclass) 'objectAt:put: 'name mclsname)
        ((methoddict Metaclass) 'objectAt:put: 'instance mclsinstance)
        (let ((Metaclass Metaclass))
            (mcdict 'objectAt:put: 'basicNew
                    (method (s) (Metaclass 'basicNew))))

        ; Fill in info about Objects
        (Object_class 'objectAt:put: 0 Metaclass_class)
        (Object_class 'objectAt:put: 1 (Dictionary 'basicNew))
        (Object_class 'objectAt:put: 2 (vector))
        (Object_class 'objectAt:put: 3 Object)
        (Object 'objectAt:put: 1 (Dictionary 'basicNew))
        (Object 'objectAt:put: 2 (vector))
        (Object 'objectAt:put: 3 'Object)

        ; Install DNU + test methods
        ((methoddict Object_class) 'objectAt:put:
            'subclass:instvars:classvars: subclass)
        ((methoddict Object) 'objectAt:put: 'print oprint)
        ((methoddict Object) 'objectAt:put: 'doesNotUnderstand:in:with:
                                               doesNotUnderstand)
        ((methoddict Object) 'objectAt:put: 'class
            (method (s) ((getself s) 'delegate)))

        ((methoddict Metaclass_class) 'objectAt:put:
            'new (method (s) ((getself s) 'basicNew)))

        (let ((o (ifixed 'dispatch:delegate:size: objdisp Object 0)))
            ((methoddict Object_class) 'objectAt:put: 'basicNew
                (method (s) (o 'basicNew))))

        ; Create ClassBehaviour and Class
        (let* ((classBehaviour (Object 'subclass:instvars:classvars:
                                       'ClassBehaviour
                                          (vector 'superclass
                                                  'methodDictionary
                                                  'layout)
                                          (vector)))
                (class (classBehaviour 'subclass:instvars:classvars:
                                        'Class
                                        (vector 'name)
                                        (vector))))

            ;(display "STAGE 4\n")

            ((methoddict class) 'objectAt:put: 'name clsname)
            ((methoddict classBehaviour) 'objectAt:put: 'methodDictionary
                (method (s) ((getself s) 'objectAt: 1)))

            ; Now fix all bootstrap "dangling" pointers
            (Metaclass       'objectAt:put: 0 classBehaviour)
            (Object_class    'objectAt:put: 0 class)
            (Metaclass_class 'objectAt:put: 0 (classBehaviour 'class))
            (Metaclass_class 'objectAt:put: 2 (vector))
            
            ; Remove the ifixed indirection for tests.
            (set! Metaclass (Metaclass_class 'delegate))
            (Metaclass_class 'objectAt:put: 3 Metaclass)
            ((Metaclass_class 'methodDictionary) 'objectAt:put:
                'new null)

            ((Object 'methodDictionary) 'objectAt:put:
                'initialize (method (s) (getself s)))

            ((classBehaviour 'methodDictionary) 'objectAt:put:
                'new (method (s)
                        (((getself s) 'basicNew) 'initialize)))
            
            ((classBehaviour 'methodDictionary)
                'objectAt:put: 'store:method:
                    (method (s name method)
                        (((getself s) 'methodDictionary)
                            'objectAt:put: name method)))


            ;(display "Minimal system ready!\n")

            ;(display "TESTS")
            ;(display (eq? (Object 'superclass) null))
            ;(display (eq? (Object_class 'superclass) class))
            ;(display (eq? (class 'superclass) classBehaviour))
            ;(display (eq? ((class 'delegate) 'superclass)
            ;              (classBehaviour 'delegate)))
            ;(display (eq? (Metaclass_class 'superclass) class))
            ;(display (eq? (Metaclass 'superclass) classBehaviour))
            ;(display (eq? (classBehaviour 'superclass) Object))
            ;(display (eq? ((classBehaviour 'delegate) 'superclass)
            ;              Object_class))
            ;(display (eq? (Object_class 'delegate) Metaclass))
            ;(display (eq? ((Metaclass 'delegate) 'delegate) Metaclass))

            (IFixed 'dispatch:delegate:
                objdisp
                (Object 'subclass:instvars:classvars:
                        'IFixed (vector) (vector)))

            (((IFixed 'class) 'methodDictionary)
                'objectAt:put: 'basicNew
                (method (s) (display "TODO: flag error\n")))

            (Env 'dispatch:delegate:
                objdisp
                (Object 'subclass:instvars:classvars:
                        'Environment (vector 'key 'index) (vector)))

            ((Env 'class) 'store:method: 'basicNew
                (method (s) (display "TODO: flag error\n")))


            ;(let ((el (Env 'scope:key: 4 Env))
            ;      (el2 (Env 'scope:key: 3 IFixed)))
            ;    (el2 'parent: el)
            ;    (display "Test:\n")
            ;    (display (el 'parent))
            ;    (display (el2 'parent))
            ;    (display el)
            ;    )


            ;(display "STAGE 5\n")

            ;((Object 'new) 'print)
            ;(Object 'print)
            ;(Metaclass 'instance)
            ;(Object_class 'basicNew) ; Metaclasses don't have a NEW. The "NEW" is
                                     ; only generated on the spot to create its
                                     ; single instance in "newclass"
            ;((class 'new) 'print)
        
            (let* ((ev (vector))
                   (make_empty_subclass (lambda (cls name)
                        (cls 'subclass:instvars:classvars: name ev ev)))
                   (store_empty (lambda (int super name)
                        (int 'dispatch:delegate: objdisp
                            (make_empty_subclass super name))))
                   (Magnitude (make_empty_subclass Object 'Magnitude))
                   (Number (make_empty_subclass Magnitude 'Number))
                   (Integer (make_empty_subclass Number 'Integer))
                   (Boolean (make_empty_subclass Object 'Boolean))
                   (True (make_empty_subclass Boolean 'True))
                   (False (make_empty_subclass Boolean 'False))
                   (Collection (make_empty_subclass Object 'Collection))
                   (SqCol (make_empty_subclass Collection 'SequenceableCollection))
                   (ArCol (make_empty_subclass SqCol 'ArrayedCollection))
                   (OrCol (SqCol 'subclass:instvars:classvars:
                                 'OrderedCollection
                                 (vector 'array 'firstIndex 'lastIndex) ev)) 
                   (AFile (make_empty_subclass Object 'AbstractFile))
                   (IFile (make_empty_subclass AFile 'InputFile))
                   (OFile (make_empty_subclass AFile 'OutputFile))
                   (Stringc (make_empty_subclass ArCol 'String))
                   (Evaluatable (make_empty_subclass Object 'Evaluatable)))

                ;((integer 'methodDictionary)
                ;    'objectAt:put: 'testMethod
                ;    (method (s) (display "IN SELF!\n")
                ;                ((getsuper s) (vector 'testMethod))))
                ;((magnitude 'methodDictionary)
                ;    'objectAt:put: 'testMethod
                ;    (method (s) (display "In SUPER!!\n")))

                ;((integer 'basicNew) 'testMethod)

                (String      'dispatch:delegate: objdisp Stringc)
                (store_empty Symbol            Stringc      'Symbol)
                (store_empty SmallInteger      Integer      'SmallInteger)
                (store_empty Array             ArCol        'Array)
                (store_empty UndefinedObject   Object       'UndefinedObject)
                (store_empty IScoped           Object       'IScoped)
                (store_empty IList             Evaluatable  'IList)
                (store_empty ICall             Evaluatable  'ICall)
                (store_empty IConst            Evaluatable  'IConst)
                (store_empty IVar              Evaluatable  'IVar)
                (store_empty IAssign           Evaluatable  'IAssign)
                (store_empty ICapture          Evaluatable  'ICapture)

                ((Array 'class) 'store:method:
                    'basicNew (method (s) ((getself s) 'basicNew: 0)))
                ((Array 'class) 'store:method:
                    'basicNew: (method (s size) (Array 'basicNew: size)))
                ((String 'class) 'store:method:
                    'basicNew (method (s) ((getself s) 'basicNew: 0)))
                ((String 'class) 'store:method:
                    'basicNew: (method (s size) (String 'basicNew: size)))
                ((Symbol 'class) 'store:method:
                    'basicNew: (method (s size) (Symbol 'basicNew: size)))

                ;(display ((ICapture 'instance) 'eval))

                (SmallInteger 'store:method: +
                    (method (s other)
                        (+ (getself s) other)))

                ;(let* ((file (InputFile 'on: "fib-compiler.scm"))
                ;       (size (file 'size))
                ;       (s (String 'basicNew: size)))
                ;    (let loop ((current 0))
                ;        (if (= current size)
                ;            (display s)
                ;            (begin
                ;                (s 'objectAt:put: current (file 'readChar))
                ;                (loop (+ current 1))))))
                (let* ((file (InputFile 'on: "fib-compiler.scm"))
                       (s (file 'readAllChars)))
                    (display s))

                ;(let ((s "boe\n"))
                ;    (s 'objectAt:put: 2 #\ƺ)
                ;    (display #\ƺ)
                ;    (display s))

                (InputFile 'dispatch:delegate:
                            objdisp
                            (make_empty_subclass IFile 'UTF8InputFile))
                (OutputFile 'dispatch:delegate:
                            objdisp
                            (make_empty_subclass OFile 'UTF8OutputFile))
                ;(InputFile 'test)

                ;(display "blaboe\n")

                ;(display (IList 'basicNew: 4))

                ;(display (1 + 2))

                ;(string 'store:method: 'testMethod
                ;    (method (s) (display "HELLO!") (display (getself s))
                ;                (display "\n")))

                ;("biep" 'testMethod)
                ;('testMethod 'testMethod)

                ;(symbol 'store:method: 'testMethod
                ;    (method (s) (display "2H!") (display (getself s))
                ;                (display "\n")))

                ;("biep" 'testMethod)
                ;('testMethod 'testMethod)

                ;(let ((test "BOE\n"))
                ;    ((string 'methodDictionary) 'objectAt:put:
                ;        'testMethod (method (s)
                ;            (display "bla\n")
                ;            (display (getself s))
                ;            (display (getself s))
                ;            (display (getself s))
                ;            (display "biep\n")))
                ;    (test 'testMethod))

                ;(let ((test (array 'basicNew: 10)))
                ;    ((array 'methodDictionary) 'objectAt:put:
                ;        'testMethod (method (s) (display "BOE\n")
                ;                                (display ((getself s) 'size))))
                ;    (display "DO test\n")
                ;    (test 'testMethod)
                ;    (display "done test\n")
                ;    )
                        
                ;(display "SYSTEM READY\n")
                Object
    )))))))
    
    (let* ((StringScanner
                (Object 'subclass:instvars:classvars:
                    'StringScanner
                    (vector 'string 'position)
                    (vector)))
           (Expression
                (Object 'subclass:instvars:classvars:
                    'Expression
                    (vector 'name 'omit)
                    (vector)))
           (Sequence
                (Expression 'subclass:instvars:classvars:
                    'SequenceExpression
                    (vector 'children 'skipWhitespace)
                    (vector)))
           (OrderedChoice
                (Expression 'subclass:instvars:classvars:
                    'OrderedChoiceExpression
                    (vector 'children)
                    (vector)))
           (Repetition
                (Expression 'subclass:instvars:classvars:
                    'Repetition
                    (vector 'child 'skipWhitespace)
                    (vector)))
           (OneOrMore
                (Repetition 'subclass:instvars:classvars:
                    'OneOrMoreExpression
                    (vector)
                    (vector)))
           (ZeroOrMore
                (Repetition 'subclass:instvars:classvars:
                    'ZeroOrMoreExpression
                    (vector)
                    (vector)))
           (ZeroOrOne
                (Repetition 'subclass:instvars:classvars:
                    'ZeroOrOneExpression
                    (vector)
                    (vector)))
           (AndPredicate
                (Repetition 'subclass:instvars:classvars:
                    'AndPredicate
                    (vector)
                    (vector)))
           (NotPredicate
               (Repetition 'subclass:instvars:classvars:
                    'NotPredicate
                    (vector 'consume)
                    (vector)))
           (Terminal
               (Expression 'subclass:instvars:classvars:
                    'Terminal
                    (vector 'regexp)
                    (vector))))

        (Expression 'store:method: 'printString
            (method (s)
                (let ((self (getself s)))
                    (display (self 'name))
                    (display " (")
                    (display ((self 'class) 'name))
                    (display ")\n"))))
        (Expression 'store:method: 'match:in:
            (method (s input scope)
                (let ((self (getself s))
                    (self 'performMatch:in: input scope)))))
        (Expression 'store:method: 'performMatch:in:
            (method (s input scope)
                (let* ((self (getself s))
                       (save (input 'pos))
                       (match (self 'privateMatch:in: input scope)))
                    (if (eq? match null)
                        (input 'pos: save)
                        (begin))
                    match)))
        (Expression 'store:method: 'privateMatch:in:
            (method (s input scope)
                ((getself s) 'subclassResponsibility)))
        (Expression 'store:method: 'asExpression
            (method (s)
                (getself s)))
        (Expression 'store:method: 'omit
            (method (s)
                ((getself s) 'objectAt: 1)))
        (Expression 'store:method: 'name
            (method (s)
                ((getself s) 'objectAt: 0)))
        (Expression 'store:method: 'plus
            (method (s)
                (OneOrMore 'for: (getself s))))
        (Expression 'store:method: 'times
            (method (s)
                (ZeroOrMore 'for: (getself s))))
        (Expression 'store:method: 'and
            (method (s)
                (AndPredicate 'for: (getself s))))
        (Expression 'store:method: 'not
            (method (s)
                (NotPredicate 'for: (getself s))))
        (Expression 'store:method: 'minus
            (method (s)
                (let ((result (NotPredicate 'for: (getself s))))
                    (result 'consume: #f))))

        (Expression 'store:method: '&
            (method (s other)
                (Sequence 'with:with: (getself s) other)))
        (Expression 'store:method: '\|
            (method (s other)
                (OrderedChoice 'with:with: (getself s) other)))
        (Expression 'store:method: 'strongAnd:
            (method (s other)
                (let ((result ((getself s) '& other)))
                    (result 'skipWhitespace: #f)
                    result)))
        (Expression 'store:method: '?
            (method (s)
                (ZeroOrOne 'for: (getself s))))
        (Expression 'store:method: '*
            (method (s)
                ((getself s) 'times)))
        (Expression 'store:method: 'strongTimes
            (method (s)
                (let ((result ((getself s) '*)))
                    (result 'skipWhitespace: #f)
                    result)))
        (Expression 'store:method: '+
            (method (s)
                ((getself s) 'plus)))
        (Expression 'store:method: 'strongPlus
            (method (s)
                (let ((result ((getself s) '+)))
                    (result 'skipWhitespace: #f)
                    result)))

        (StringScanner 'store:method: 'pos
            (method (s)
                ((getself s) 'objectAt: 1)))

        (StringScanner 'store:method: 'string
            (method (s)
                ((getself s) 'objectAt: 0)))

        (StringScanner 'store:method: 'pos:
            (method (s new)
                ((getself s) 'objectAt:put: 1 new)))

        (StringScanner 'store:method: 'string:
            (method (s new)
                ((getself s) 'objectAt:put: 0 new)))

        (StringScanner 'store:method: 'next
            (method (s)
                (let* ((self (getself s))
                       (str  (self 'objectAt: 0))
                       (pos  (self 'objectAt: 1))
                       (res  (str 'objectAt: pos)))
                    (self 'objectAt:put: 1 (+ pos 1))
                    res)))

        (StringScanner 'store:method: 'initialize
            (method (s)
                ((getself s) 'pos: 0)
                (getself s)))

        (StringScanner 'store:method: 'atEnd
            (method (s)
                (let ((self (getself s)))
                    (= (self 'pos) ((self 'string) 'size)))))

        ((StringScanner 'class) 'store:method: 'on:
            (method (s str)
                (let ((result ((getself s) 'new)))
                    (result 'string: str)
                    result)))

        (Sequence 'store:method: 'privateMatch:in:
            (method (s input scope)
                (let loop ((matches (

    )
)
)))
