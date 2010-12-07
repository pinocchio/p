|md|
md := Collection.Benchmark.MultiDictBenchmark new.
md probeCount: 100.
md useStDict: false.
md keyBlock: [:i| PBenchmark.Collection.Dictionary.HashObject with: ((i \\ 10) << 18 + (i \\ 10))].
md run.
IO.File stdout << 'MultiDict [:i| HashObject with: ((i \\ 10) << 18 + (i \\ 10))]'; lf.
IO.File stdout <<  md.
