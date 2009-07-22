(testsuite "Smalltalk tests" (lambda ()

(assert
    (= 2 ((((SmalltalkParser 'new) 'assignmentOp) 'match:in:
            (StringScanner 'on: ":=bla") null) 'size)))

(assert
    (= 1 ((((SmalltalkParser 'new) 'initializeBar) 'match:in:
            (StringScanner 'on: "|=bla") null) 'size)))
))
