|md|
md := Collection.Benchmark.MultiDictBenchmark new.
md probeCount: 100.
md useStDict: false.
md keyBlockGenerator: [:size || indices |
    indices := Number.Random.HammersleySequence randomArray: size.
    [:i||j|
        i > size 
			ifTrue: [ i ]
        	ifFalse: [
				j := indices at: i.
                PBenchmark.Collection.Dictionary.HashObject with: ((i \\ 10) << 18 + (i \\ 10))]]].
md run.
IO.File stdout << 'MultiDict randomized [:i| HashObject with: ((i \\ 10) << 18 + (i \\ 10))]'; lf.
IO.File stdout <<  md.
