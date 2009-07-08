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
       )
       ())))
    
    (load "boot/test/test-smalltalk.p"))
