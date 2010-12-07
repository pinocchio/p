|md|
md := Collection.Benchmark.MultiDictBenchmark new.
md probeCount: 1000.
md useStDict: false.
md keyBlock: [:i| i].
md run.
IO.File stdout << 'MultiDict [:i| i]'; lf.
IO.File stdout <<  md.
