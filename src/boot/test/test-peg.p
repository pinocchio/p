(display "\nInternal AST tests\n")

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
    (display (= 1 ((parser 'match:in: input null) 'size))))

(let ((input (StringScanner 'on: "Test"))
      (parser ((#\T 'asParser) '& #\e)))
    (display (= 2 (length (parser 'match:in: input null)))))

(let ((input (StringScanner 'on: "Test"))
      (parser ((#\Q 'asParser) '\| #\T)))
    (display (= 1 ((parser 'match:in: input null) 'size))))

(let ((input (StringScanner 'on: "abababaa"))
      (parser (((#\a 'asParser) '& #\b) '*)))
    (display (= 3 (length (parser 'match:in: input null)))))

(let ((input (StringScanner 'on: "abababaa"))
      (parser (((#\a 'asParser) '& #\b) '+)))
    (display (= 3 (length (parser 'match:in: input null)))))

(let ((input (StringScanner 'on: "abababaa"))
      (parser (((#\b 'asParser) '& #\a) '+)))
    (display (eq? (parser 'match:in: input null) null)))

(let ((input (StringScanner 'on: "abababaa"))
      (parser (((#\b 'asParser) '& #\a) '?)))
    (display (= 1 (length (parser 'match:in: input null)))))

(let ((input (StringScanner 'on: "abababaa"))
      (parser (((#\b 'asParser) '& #\a) '?)))
    (display (= 1 (length (parser 'match:in: input null)))))

(let ((input (StringScanner 'on: "abababaa"))
      (parser ("abab" 'asParser)))
    (display (= 4 ((parser 'match:in: input null) 'size))))

(display (1 + null))

(let ((parser (Parser 'named: "Test")))
    (parser '<= ("abab" 'asParser))
    (parser '=~ "abababaa"))
