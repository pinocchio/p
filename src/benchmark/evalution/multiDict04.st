md := MultiDictBenchmark new.
md probeCount: 100.
md keyBlock: [:i| HashObject with: ((i \\ 100) << 18 + (i \\ 100))].
md run.
OSProcess thisOSProcess stdOut nextPutAll: 'Smalltalk MultiDict Benchmark [:i| HashObject with: ((i \\ 100) << 18 + (i \\ 100))]'.
OSProcess thisOSProcess stdOut nextPutAll: String lf.
OSProcess thisOSProcess stdOut nextPutAll: md asString.
