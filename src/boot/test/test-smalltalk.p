(testsuite "Smalltalk tests" (lambda ()

(assert
    (= 2 ((((SmalltalkParser 'new) 'assignmentOp) 'match:in:
            (StringScanner 'on: ":=bla") null) 'size)))

(assert
    (= 1 ((((SmalltalkParser 'new) 'initializeBar) 'match:in:
            (StringScanner 'on: "|=bla") null) 'size)))

;(assert
;    (= 1 ((((SmalltalkParser 'new) 'bar) 'match:in:
;            (StringScanner 'on: "|=bla") null) 'size)))
;TODO make tests run, need Parser>>doesNotUnderstand to do this
;(let    ((parser ((SmalltalkParser 'new) 'character))
;         (string (StringScanner 'on: "--")))
;    (assert (= 1 ((parser 'match:in: string) 'size))))
))
