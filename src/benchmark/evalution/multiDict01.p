md := MultiDictBenchmark new.
md probeCount: 100.
md useStDict: false.
md keyBlock: [:i| HashObject with: i hash].
md run.
IO.File stdout << 'MultiDict [:i| HashObject with: i hash]'; lf.
IO.File stdout <<  md.
