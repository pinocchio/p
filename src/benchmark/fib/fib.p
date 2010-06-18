Number.SmallInt compile: '
fib
    ^self < 2 ifTrue: [ 1 ]
             ifFalse: [ (self - 1) fib + (self - 2) fib ].
'.
IO.File stdout << 34 fib asString; lf.
