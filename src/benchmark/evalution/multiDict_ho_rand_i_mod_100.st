md := MultiDictBenchmark new.
md probeCount: 100.
md keyBlockGenerator: [:size|| indices |
    indices := HammersleySequence randomArray: size.
    [:i|| j|
		i > size 
			ifTrue: [ i ]
        	ifFalse: [
				j := indices at: i.
                HashObject with: ((i \\ 100) << 18 + (i \\ 100))]]].
md run.
OSProcess thisOSProcess stdOut nextPutAll: 'Smalltalk MultiDict Benchmark randomized [:i| HashObject with: ((i \\ 100) << 18 + (i \\ 100))]'.
OSProcess thisOSProcess stdOut nextPutAll: String lf.
OSProcess thisOSProcess stdOut nextPutAll: md asString.
