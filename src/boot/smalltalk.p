(let ((SmalltalkParser (newclass SmallParser Object (parsers id) ()
       ((assignmentOp (s)
            (((":=" 'asParser) '\| #\_) 'omit: #t))
        (initializeAnnotation (s)
            (let ((self (getself s)))
            (let ((p (Parser 'named: "ANNOTATION")))
                (p '<= ((((#\< 'asParser) 'omit: #t) '&
                            ((self 'keywordAnnotation) '\|
                             (self 'unaryAnnotation)))
                            '<& ((#\> 'asParser) 'omit: #t)))
                p))
            )
        (initializeArray (s) 
            (let ((self (getself s)))
            (let ((array (Parser 'named: "ARRAY")))
                (array '<= ((((#\( 'asParser) 'omit: #t) '&
                            (((((   (self 'numberConstant) '\|
                                    (self 'stringConstant)) '<=
                                    (self 'symbolInArray)) '<=
                                    (self 'symbolConstant)) '<=
                                    (self 'characterConstant)) '<=
                                    array)) 
                            '<& ((#\) 'asParser) 'omit: #t)))
                (array 'semantics: (lambda (result) result))
                array)))
        (initializeArrayConst (s)
            (let ((self (getself s)))
                (((#\# 'asParser) 'omit: #t) '& (self 'array))))
        (initializeAssignmentExpressions (s)
            (let ((self (getself s)))
                (((self 'variableName) '& (self 'assignmentOp )) 'times)))
        (initializeBar (s)
            ((#\| 'asParser) 'omit: #t))
        (initializeBinaryExpression (s) ; TODO this is not complete yet
            (let ((self (getself s)))
            (self 'preStoreBinaryObjectDescription)))

        ;this is where one could add more methods
        ;write parser for st using the one in pharo
       )
       ())))
    
    (load "boot/test/test-smalltalk.p"))
