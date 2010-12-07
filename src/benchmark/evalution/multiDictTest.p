|md|
md := Collection.Benchmark.MultiDictBenchmark new.
md probeCount: 10.
md useStDict: false.
md keyBlock: [:i| PBenchmark.Collection.Dictionary.HashObject with: i hash].
md run.
IO.File stdout << 'MultiDict [:i| HashObject with: i hash]'; lf.
IO.File stdout <<  md.
