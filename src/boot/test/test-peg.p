(display "Internal AST tests")

(testsuite "PEG tests" (lambda ()

(let ((sscan (StringScanner 'on: "Test")))
    (assert (= 0 (sscan 'pos)))
    (assert (char= (sscan 'next) #\T))
    (assert (= 1 (sscan 'pos)))
    (assert (char= (sscan 'next) #\e))
    (sscan 'next)
    (sscan 'next)
    (assert (sscan 'atEnd)))

(let ((input (StringScanner 'on: "Test"))
      (parser (#\T 'asParser)))
    (assert (= 1 ((parser 'match:in: input null) 'size))))

(let ((input (StringScanner 'on: "Test"))
      (parser ((#\T 'asParser) '& #\e)))
    (assert (= 2 (length (parser 'match:in: input null)))))

(let ((input (StringScanner 'on: "Test"))
      (parser ((#\Q 'asParser) '\| #\T)))
    (assert (= 1 ((parser 'match:in: input null) 'size))))

(let ((input (StringScanner 'on: "abababaa"))
      (parser (((#\a 'asParser) '& #\b) '*)))
    (assert (= 3 (length (parser 'match:in: input null)))))

(let ((input (StringScanner 'on: "abababaa"))
      (parser (((#\a 'asParser) '& #\b) '+)))
    (assert (= 3 (length (parser 'match:in: input null)))))

(let ((input (StringScanner 'on: "abababaa"))
      (parser (((#\b 'asParser) '& #\a) '+)))
    (assert (eq? (parser 'match:in: input null) null)))

(let ((input (StringScanner 'on: "abababaa"))
      (parser (((#\b 'asParser) '& #\a) '?)))
    (assert (= 1 (length (parser 'match:in: input null)))))

(let ((input (StringScanner 'on: "abababaa"))
      (parser (((#\b 'asParser) '& #\a) '?)))
    (assert (= 1 (length (parser 'match:in: input null)))))

(let ((input (StringScanner 'on: "abababaa"))
      (parser ("abab" 'asParser)))
    (assert (= 4 ((parser 'match:in: input null) 'size))))

;(assert (1 + null))

(let ((parser (Parser 'named: "Test")))
    (parser '<= ("abab" 'asParser))
    (parser '=~ "abababaa"))

))
