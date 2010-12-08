|md|
md := Collection.Benchmark.MultiDictBenchmark new.
md probeCount: 1000.
md useStDict: false.
md keyBlock: [:i| 
    PBenchmark.Collection.Dictionary.HashObject with: (i << 18 + i)].
md run.
IO.File stdout << 'MultiDict [:i| HashObject with: (i << 18 + i)]'; lf.
IO.File stdout <<  md.
