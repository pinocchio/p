;(let ((cls (Object 'subclass:instvars:classvars: 'Boe (vector) (vector))))
;    (cls 'store:method: 'eval (method (s) "EVAL ACTIVATED!\n"))

(display "\nInternal AST tests\n")
;(let ((cls (newclass cls Object () ()
;            ((eval (s) "EVAL ACTIVADED!\n"))
;            ())))
;    (display cls)
;    (display (eq? ((IScoped 'new:size: (cls 'new) 0) 'scope)
;                  ((ICapture 'instance) 'eval)))
; 
;    (let ((test (IScoped 'new:size: (cls 'new) 0)))
;        (display "going to eval\n")
;        (display (test 'apply:in: (vector) ((ICapture 'instance) 'eval)))
;        (display "done one\n")
;        (let ((test2 (test 'shift)))
;            (display (test2))))
;)

(display "\nPEG tests\n")

(let ((sscan (StringScanner 'on: "Test")))
    (display (= 0 (sscan 'pos)))
    (display (= (sscan 'next) #\T))
    (display (= 1 (sscan 'pos)))
    (display (= (sscan 'next) #\e))
    (sscan 'next)
    (sscan 'next)
    (display (sscan 'atEnd)))

(let ((input (StringScanner 'on: "Test"))
      (parser (#\T 'asParser)))
    (display (= #\T (parser 'match:in: input null))))

(let ((input (StringScanner 'on: "Test"))
      (parser ((#\T 'asParser) '& #\e)))
    (display (= 2 (length (parser 'match:in: input null)))))

(let ((input (StringScanner 'on: "Test"))
      (parser ((#\Q 'asParser) '\| #\T)))
    (display (= #\T (parser 'match:in: input null))))

(let ((input (StringScanner 'on: "abababaa"))
      (parser (((#\a 'asParser) '& #\b) '*)))
    (display (= (length (parser 'match:in: input null)) 3)))

(let ((input (StringScanner 'on: "abababaa"))
      (parser (((#\a 'asParser) '& #\b) '+)))
    (display (= (length (parser 'match:in: input null)) 3)))

(let ((input (StringScanner 'on: "abababaa"))
      (parser (((#\b 'asParser) '& #\a) '+)))
    (display (eq? (parser 'match:in: input null) null)))
