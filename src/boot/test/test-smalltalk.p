(testsuite "Smalltalk tests" (lambda ()

(assert ((((SmalltalkParser 'new) 'assignmentOp) 'match:in:
            (StringScanner 'on: ":=bla") null) '= ":="))

(assert ((((SmalltalkParser 'new) 'bar) 'match:in:
            (StringScanner 'on: "|=bla") null) '= "|"))

(let*    ((scparser (SmalltalkParser 'new))
          (parser (scparser 'character))
          (string (StringScanner 'on: "--")))
    ;testCharacter
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
    ;testCharacterConstant
    (set! parser (scparser 'characterConstant))
    (set! string (StringScanner 'on: "a"))
    (assert (eq? (parser 'match:in: string null) null))
    (set! string (StringScanner 'on: "$_"))
    (assert ((parser 'match:in: string null) '= "_"))
   
    ;testIdentifier
    (set! parser (scparser 'identifier))
    (set! string (StringScanner 'on: "abcd "))
    (assert ((parser 'match:in: string null) '= "abcd"))

    ;testKeyword
    ;(set! parser (scparser 'keyword))
    ;(set! string (StringScanner 'on: "abcd: "))
    ;(assert ((parser 'match:in: string null) '= "abcd"))


    ;testAnnotation
    ;(set! parser (scparser 'annotation))
    ;(set! string (StringScanner 'on: "<abc: 1 def: (2 + 3) ghi : (3 b)>"))
    ;(display ((StringScanner 'match:in: string null)  'class))

    ;testArray
    ;(set! parser (scparser 'array))
    ;(set! string (StringScanner 'on: "()"))
)))
