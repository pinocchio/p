Type.SmallInt compile: '
fib
    ^self < 2 ifTrue: [ 1 ]
             ifFalse: [ (self - 1) fib + (self - 2) fib ].
'.
Interpreter.Interpreter interpret: [
    IO.File stdout << 25 fib asString; lf.
]
