(let ((SmalltalkParser (newclass SmallParser Object (parsers id) ()
       ((assignmentOp (s)
            (((":=" 'asParser) '\| #\_) 'omit: #t))
        (initializeAnnotation (s)
            (let ((self (getself s)))
            (let ((p (Parser 'named: "ANNOTATION")))
                (p '<= (((#\< 'asParser) 'omit: #t) '&
                            ((self 'keywordAnnotation) '\|
                             (self 'unaryAnnotation))
                            '<& ((#\> 'asParser) 'omit: #t)))
                p))
            )
        ;this is where one could add more methods
        ;write parser for st using the one in pharo
       )
       ())))
    
    (load "boot/test/test-smalltalk.p"))
