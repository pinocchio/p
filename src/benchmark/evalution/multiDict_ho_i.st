md := MultiDictBenchmark new.
md probeCount: 10.
md keyBlock: [:i| 
    HashObject with: (i << 18 + i)].
md run.
OSProcess thisOSProcess stdOut nextPutAll: 'Smalltalk MultiDict Benchmark [:i| HashObject with: (i << 18 + i)]'.
OSProcess thisOSProcess stdOut nextPutAll: String lf.
OSProcess thisOSProcess stdOut nextPutAll: md asString.
