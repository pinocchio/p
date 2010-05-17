#! /usr/bin/env ruby

B1 = [
    ['Python 2.6 Parse', 'python2.6 fibParse.py'],
    ['Python 2.6',       'python2.6 fib.py'],

    ['Python 3.0 Parse', 'python3.0 fibParse.py'],
    ['Python 3.0',       'python3.0 fib.py'],

    ['Python 3.1 Parse', 'python3.1 fib.py'],
    ['Python 3.1',       'python3.1 fib.py'],

    ['Ruby Parse',       './fibParse.rb'],
    ['Ruby',             './fib.rb'],

    ['Ruby 1.9 Parse',   'ruby1.9 ./fibParse.rb'],
    ['Ruby 1.9',         'ruby1.9 ./fib.rb'],

    ['Ruby 1.9.1 Parse', 'ruby1.9.1 ./fibParse.rb'],
    ['Ruby 1.9.1',       'ruby1.9.1 ./fib.rb'],
]

BENCHMARKS = [
    [`python2.6 --version`, 'python2.6', 'fibParse.py', 'fib.py'],
    [`python3.0 --version`, 'python2.6', 'fibParse.py', 'fib.py'],
    [`python3.1 --version`, 'python2.6', 'fibParse.py', 'fib.py'],
    
    [`ruby1.8 --version`,   'ruby1.8',   'fibParse.rb', 'fib.rb'],
    [`ruby1.9 --version`,   'ruby1.9',   'fibParse.rb', 'fib.rb'],
    [`ruby1.9.1 --version`, 'ruby1.9.1', 'fibParse.rb', 'fib.rb'],
    
    [`gst --version | grep version`, 'gst -f', 'fibParse.gst', 'fib.gst'],

    ['Pinocchio', '../../pinocchio', 'benchmark/fib/fibParse.p' 
                                     'benchmark/fib/fib.p'],
]

if __FILE__ == $0
    runBenchmarks()
end
