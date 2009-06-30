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

(let ((input (StringScanner 'on: "abababaa"))
      (parser (((#\b 'asParser) '& #\a) '?)))
    (display (= 1 (length (parser 'match:in: input null)))))

(let ((input (StringScanner 'on: "abababaa"))
      (parser (((#\b 'asParser) '& #\a) '?)))
    (display (= 1 (length (parser 'match:in: input null)))))
