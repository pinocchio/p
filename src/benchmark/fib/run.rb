#! /usr/bin/env ruby

require '../benchmark'

BENCHMARKS = [
#    ['python2.6', 'fib.py', 'fibParse.py'],
#    ['python3.0', 'fib.py', 'fibParse.py'],
#    ['python3.1', 'fib.py', 'fibParse.py'],
#    
#    ['ruby',      'fib.rb', 'fibParse.rb'],
#    ['ruby1.9',   'fib.rb', 'fibParse.rb'],
#    ['ruby1.9.1', 'fib.rb', 'fibParse.rb'],
#
#    ['php', 'fib.php', 'fibParse.php'],
#    ['lua', 'fib.lua', 'fibParse.lua'],
#    
    [`gst --version | grep version`, 'gst -f', 'fib.gst', 'fibParse.gst'],
#
#    ['Pinocchio', '../../pinocchio', 'fib.p', 'fibParse.p'],
]


benchmark = Benchmark.createFrom BENCHMARKS

if __FILE__ == $0
    benchmark.run
end
