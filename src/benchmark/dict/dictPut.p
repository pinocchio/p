[ |a|
    a := Collection.Dictionary new.
    1 to: 100000 do: [ :i|
        a at: i put: i.
    ].
] value.
