(display "TESTING SYSTEM\n")

(display "\nCore tests\n")
(display (eq? (Object 'superclass) null))
(display (eq? (Object_class 'superclass) class))
(display (eq? (class 'superclass) classBehaviour))
(display (eq? ((class 'delegate) 'superclass)
              (classBehaviour 'delegate)))
(display (eq? (Metaclass_class 'superclass) (classBehaviour 'class)))
(display (eq? (Metaclass 'superclass) classBehaviour))
(display (eq? (classBehaviour 'superclass) Object))
(display (eq? ((classBehaviour 'delegate) 'superclass)
              Object_class))
(display (eq? (Object_class 'delegate) Metaclass))
(display (eq? ((Metaclass 'delegate) 'delegate) Metaclass))

(display "\nEnvironment tests\n")
(let ((el (Env 'scope:key: 4 Env))
      (el2 (Env 'scope:key: 3 IFixed)))
    (el2 'parent: el)
    (display (eq? (el 'parent) null))
    (display (eq? (el2 'parent) el)))


; XXX Broken!
;((integer 'methodDictionary)
;    'objectAt:put: 'testMethod
;    (method (s) (display "IN SELF!\n")
;                ((getsuper s) (vector 'testMethod))))
;((magnitude 'methodDictionary)
;    'objectAt:put: 'testMethod
;    (method (s) (display "In SUPER!!\n")))

;((integer 'basicNew) 'testMethod)


;(display ((ICapture 'instance) 'eval))

(SmallInteger 'store:method: +
    (method (s other)
        (+ (getself s) other)))


(display "\nSmallInteger tests\n")
(display (= (40 + 2) 42))

(display "\nUnicode tests\n")
(let ((s "boe\n"))
    (s 'objectAt:put: 2 #\ƺ)
    (display (= (s 'objectAt: 2) #\ƺ)))

;(display "blaboe\n")

;(display (IList 'basicNew: 4))

;(display (1 + 2))

(display "\nString extension tests\n")

(String 'store:method: 'testMethod
    (method (s) 40))

(display (= ("biep" 'testMethod) 40))
(display (= ('testMethod 'testMethod) 40))

(Symbol 'store:method: 'testMethod
    (method (s) 42))

(display (= ("biep" 'testMethod) 40))
(display (= ('testMethod 'testMethod) 42))

(display "\nArray extension tests\n")
(let ((test (Array 'basicNew: 10)))
    ((Array 'methodDictionary) 'objectAt:put:
        'testMethod (method (s) ((getself s) 'size)))
    (display (= (test 'testMethod) 10)))

;(display "\nFile tests\n")
;(let* ((file (InputFile 'on: "fib-compiler.scm"))
;       (size (file 'size))
;       (s (String 'basicNew: size)))
;    (let loop ((current 0))
;        (if (= current size)
;            (display s)
;            (begin
;                (s 'objectAt:put: current (file 'readChar))
;                (loop (+ current 1))))))


;(let* ((file (InputFile 'on: "fib-compiler.scm"))
;       (s (file 'readAllChars)))
;    (display s))

;(InputFile 'dispatch:delegate:
;            objdisp
;            (make_empty_subclass IFile 'UTF8InputFile))
;(OutputFile 'dispatch:delegate:
;            objdisp
;            (make_empty_subclass OFile 'UTF8OutputFile))

;(InputFile 'test)

      

(display "\nSYSTEM READY\n")


