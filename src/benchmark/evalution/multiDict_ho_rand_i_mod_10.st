md := MultiDictBenchmark new.
md probeCount: 100.
md keyBlockGenerator: [:size|| indices |
    indices := HammersleySequence randomArray: size.
    [:i|| j|
		i > size 
			ifTrue: [ i ]
        	ifFalse: [
				j := indices at: i.
                HashObject with: ((i \\ 10) << 18 + (i \\ 10))]]].
md run.
OSProcess thisOSProcess stdOut nextPutAll: 'Smalltalk MultiDict Benchmark randomized [:i| HashObject with: ((i \\ 10) << 18) + (i \\ 10)]'.
OSProcess thisOSProcess stdOut nextPutAll: String lf.
OSProcess thisOSProcess stdOut nextPutAll: md asString.
