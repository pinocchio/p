|md|
md := Collection.Benchmark.MultiDictBenchmark new.
md probeCount: 1000.
md useStDict: false.
md keyBlockGenerator: [:size || indices |
    indices := Number.Random.HammersleySequence randomArray: size.
    [:i||j|
        i > size 
			ifTrue: [ i ]
        	ifFalse: [
				j := indices at: i.
                PBenchmark.Collection.Dictionary.HashObject with: (i \\ 100)].
md run.
IO.File stdout << 'MultiDict randomized [:i| HashObject with: (i \\ 100)]'; lf.
IO.File stdout <<  md.
