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


(display "\nSuper-send testing\n")
((Integer 'methodDictionary)
    'objectAt:put: 'testMethod
    (method (s) (+ 40 ((getsuper s) (vector 'testMethod)))))
((Magnitude 'methodDictionary)
    'objectAt:put: 'testMethod
    (method (s) 2))

(display (= 42 ((Integer 'basicNew) 'testMethod)))

((Integer 'methodDictionary)
    'objectAt:put: 'testMethod
    (method (s) ((getsuper s) (vector 'testMethod: 40))))

((Magnitude 'methodDictionary)
    'objectAt:put: 'testMethod:
    (method (s x) (+ x 2)))

(display (= 42 ((Integer 'basicNew) 'testMethod)))

(display "\nSmallInteger tests\n")
(SmallInteger 'store:method: +
    (method (s other)
        (+ (getself s) other)))

(display (= (40 + 2) 42))

(display "\nUnicode tests\n")
(let ((s "boe\n"))
    (s 'objectAt:put: 2 #\ƺ)
    (display (char= (s 'objectAt: 2) #\ƺ)))

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

(display "\nEscape contination tests\n")
(display (= 5 (callec (lambda (cont) 5))))

(display (= 10
    (callec (lambda (cont)
                (cont 10)
                5))))

;(let ((bla null))
;    (display (+ 10
;            (callec (lambda (cont)
;                (set! bla cont)
;                20))))
;    (display (+ 40 ((lambda (x) (bla 4)) 4))))


(display "\nError handling tests\n")
(display 
    (begin 
         (callec 
            (lambda (cont)
                (error-handler cont)
                (exit "a")))
         (error-handler error)
         #t)) 

(display "\nCharacter table tests\n")
(display (eq? #\v #\v))
(display (eq? #f (eq? #\䷊ #\䷊)))
(display (eq? (charactertable 'objectAt: 119) null))
("w" 'objectAt: 0)
(display (eq? (charactertable 'objectAt: 119) ("w" 'objectAt: 0)))
(display (eq? #f (eq? (charactertable 'objectAt: 119) null)))


;(display "\nStream testing\n")
;(display "\nWrite 'a':")
;(display (char= (stdinstream 'readChar) #\a))
;(stdinstream 'readChar) 
;
;(display "\nWrite the 'HAMMER AND SICKLE'-sign character '☭':")
;(display (char= (stdinstream 'readChar) #\☭))
;(stdinstream 'readChar) 
;(display "\nShould be 't':")
;(stdoutstream 'writeChar: #\t)
;(display "\nShould be SWONMAN '☃':")
;(stdoutstream 'writeChar: #\☃)

(display "\nDictionary test\n")
(let ((d (Dictionary 'new)))    ;TODO make this test not fail because it cant fail
     ; (d 'objectAt: 'aKey))
     )

(display "\nSYSTEM READY\n")


