md := MultiDictBenchmark new.
md probeCount: 2.
md keyBlock: [:i| HashObject with: i hash].
md run.
OSProcess thisOSProcess stdOut nextPutAll: 'Smalltalk MultiDict Benchmark [:i| HashObject with: i hash]'.
OSProcess thisOSProcess stdOut nextPutAll: String lf.
OSProcess thisOSProcess stdOut nextPutAll: md asString.
