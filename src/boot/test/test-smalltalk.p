(testsuite "Smalltalk tests" (lambda ()

(assert ((((SmalltalkParser 'new) 'assignmentOp) 'match:in:
            (StringScanner 'on: ":=bla") null) '= ":="))

(assert ((((SmalltalkParser 'new) 'bar) 'match:in:
            (StringScanner 'on: "|=bla") null) '= "|"))

(let    ((parser ((SmalltalkParser 'new) 'character))
         (string (StringScanner 'on: "--")))
    (assert ((parser 'match:in: string null) '= "-"))
    (set! string (StringScanner 'on: "__"))
    (assert ((parser 'match:in: string null) '= "_"))
    (set! string (StringScanner 'on: "4"))
    (assert ((parser 'match:in: string null) '= "4"))
    (set! string (StringScanner 'on: "p"))
    (assert ((parser 'match:in: string null) '= "p"))
    (set! string (StringScanner 'on: "P"))
    (assert ((parser 'match:in: string null) '= "P"))
    (set! string (StringScanner 'on: "&"))
    (assert ((parser 'match:in: string null) '= "&"))
)))
