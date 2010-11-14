md := MultiDictBenchmark new.
md probeCount: 100.
md useStDict: false.
md keyBlock: [:i| HashObject with: i].
md run.
IO.File stdout << 'MultiDict [:i| HashObject with: i]'; lf.
IO.File stdout <<  md.
