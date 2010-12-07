md := MultiDictBenchmark new.
md probeCount: 10.  		
md keyBlockGenerator: [:size|| indices |
    indices := HammersleySequence randomArray: size.
    [:i|| j|
		i > size 
			ifTrue: [ i ]
        	ifFalse: [
				j := indices at: i.
                HashObject with: (j << 18 + j)]]].
md run.
OSProcess thisOSProcess stdOut nextPutAll: 'Smalltalk MultiDict Benchmark randomized [:i| HashObject with: (i << 18 + i)]'.
OSProcess thisOSProcess stdOut nextPutAll: String lf.
OSProcess thisOSProcess stdOut nextPutAll: md asString.
