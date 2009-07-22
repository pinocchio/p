(testsuite "Core tests" (lambda ()

(assert (eq? (Object 'superclass) null))
(assert (eq? (Object_class 'superclass) class))
(assert (eq? (class 'superclass) classBehaviour))
(assert (eq? ((class 'delegate) 'superclass)
              (classBehaviour 'delegate)))
(assert (eq? (Metaclass_class 'superclass) (classBehaviour 'class)))
(assert (eq? (Metaclass 'superclass) classBehaviour))
(assert (eq? (classBehaviour 'superclass) Object))
(assert (eq? ((classBehaviour 'delegate) 'superclass)
              Object_class))
(assert (eq? (Object_class 'delegate) Metaclass))
(assert (eq? ((Metaclass 'delegate) 'delegate) Metaclass))
))

(testsuite "Environment tests" (lambda ()
(let ((el (Env 'scopeId:size: Env 4))
      (el2 (Env 'scopeId:size: IFixed 3)))
    (el2 'parent: el)
    (assert (eq? (el 'parent) null))
    (assert (eq? (el2 'parent) el)))
))

(testsuite "Super-send testing" (lambda ()
((Integer 'methodDictionary)
    'objectAt:put: 'testMethod
    (method (self super) (+ 40 (super (vector 'testMethod)))))
((Magnitude 'methodDictionary)
    'objectAt:put: 'testMethod
    (method (self super) 2))

(assert (= 42 ((Integer 'basicNew) 'testMethod)))

((Integer 'methodDictionary)
    'objectAt:put: 'testMethod
    (method (self super) (super (vector 'testMethod: 40))))
((Magnitude 'methodDictionary)
    'objectAt:put: 'testMethod:
    (method (self super x) (+ x 2)))

(assert (= 42 ((Integer 'basicNew) 'testMethod)))
))

(testsuite "SmallInteger tests" (lambda ()
(SmallInteger 'store:method: +
    (method (self super other)
        (+ self other)))

(assert (= (40 + 2) 42))
))

(testsuite "Unicode tests" (lambda ()
(let ((s "boe\n"))
    (s 'objectAt:put: 2 #\ƺ)
    (assert (char= (s 'objectAt: 2) #\ƺ)))
))
;(assert "blaboe\n")

;(assert (IList 'basicNew: 4))

;(assert (1 + 2))

(testsuite "String extension tests" (lambda ()

(String 'store:method: 'testMethod
    (method (self super) 40))

(assert (= ("biep" 'testMethod) 40))
(assert (= ('testMethod 'testMethod) 40))

(Symbol 'store:method: 'testMethod
    (method (self super) 42))

(assert (= ("biep" 'testMethod) 40))
(assert (= ('testMethod 'testMethod) 42))
))

(testsuite "Array extension tests" (lambda ()
(let ((test (Array 'basicNew: 10)))
    ((Array 'methodDictionary) 'objectAt:put:
        'testMethod (method (self super) (self 'size)))
    (assert (= (test 'testMethod) 10)))

; (testsuite "Dictionary test" (lambda ()
 (let ((d (Dictionary 'new)))
       (d 'objectAt: 'aKey))
; ))
))

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


;(let* ((file (InputFile 'on: "pcompiler.scm"))
;       (s (file 'readAllChars)))
;    (display s))

;(InputFile 'dispatch:delegate:
;            objdisp
;            (make_empty_subclass IFile 'UTF8InputFile))
;(OutputFile 'dispatch:delegate:
;            objdisp
;            (make_empty_subclass OFile 'UTF8OutputFile))

;(InputFile 'test)

(testsuite "Escape contination tests" (lambda ()
(assert (= 5 (callec (lambda (cont) 5))))

(assert (= 10
    (callec (lambda (cont)
                (cont 10)
                5))))

;(let ((bla null))
;    (display (+ 10
;            (callec (lambda (cont)
;                (set! bla cont)
;                20))))
;    (display (+ 40 ((lambda (x) (bla 4)) 4))))
))

(testsuite "Error handling tests" (lambda ()
(assert 
    (begin 
         (callec 
            (lambda (cont)
                (error-handler cont)
                (exit "a")))
         (error-handler error)
         #t)) 
))

(testsuite "Character table tests" (lambda ()
(assert (eq? #\v #\v))
(assert (eq? #f (eq? #\䷊ #\䷊)))
(assert (eq? (charactertable 'objectAt: 119) null))
("w" 'objectAt: 0)
(assert (eq? (charactertable 'objectAt: 119) ("w" 'objectAt: 0)))
(assert (eq? #f (eq? (charactertable 'objectAt: 119) null)))
))

;(display "\nStream testing\n")
;(display "\nWrite 'a':")
;(assert (char= (stdinstream 'readChar) #\a))
;(stdinstream 'readChar) 
;
;(display "\nWrite the 'HAMMER AND SICKLE'-sign character '☭':")
;(assert (char= (stdinstream 'readChar) #\☭))
;(stdinstream 'readChar) 
;(display "\nShould be 't':")
;(stdoutstream 'writeChar: #\t)
;(display "\nShould be SWONMAN '☃':")
;(stdoutstream 'writeChar: #\☃)
