(display "\nSmalltalk tests\n")

(display
    (= 2 ((((SmalltalkParser 'new) 'assignmentOp) 'match:in:
            (StringScanner 'on: ":=bla") null) 'size)))

(display
    (= 1 ((((SmalltalkParser 'new) 'initializeBar) 'match:in:
            (StringScanner 'on: "|=bla") null) 'size)))

