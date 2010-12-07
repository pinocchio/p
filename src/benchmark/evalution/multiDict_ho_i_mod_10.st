md := MultiDictBenchmark new.
md probeCount: 100.
md keyBlock: [:i| HashObject with: ((i \\ 10) << 18 + (i \\ 10))].
md run.
OSProcess thisOSProcess stdOut nextPutAll: 'Smalltalk MultiDict Benchmark [:i| HashObject with: ((i \\ 10) << 18) + (i \\ 10)]'.
OSProcess thisOSProcess stdOut nextPutAll: String lf.
OSProcess thisOSProcess stdOut nextPutAll: md asString.
