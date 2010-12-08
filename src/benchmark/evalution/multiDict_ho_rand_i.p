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
                PBenchmark.Collection.Dictionary.HashObject with: (i << 18 + i)]]].
md run.
IO.File stdout << 'MultiDict Randomized [:i| HashObject with: (i << 18 + i)]'; lf.
IO.File stdout <<  md.
