Number.SmallInt compile: '
fib
    ^self < 2 ifTrue: [ 1 ]
             ifFalse: [ (self - 1) fib + (self - 2) fib ].
'.
Interpretation.Interpreter interpret: [
    IO.File stdout << 30 fib asString; lf.
]
