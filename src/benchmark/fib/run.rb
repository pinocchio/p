#! /usr/bin/env ruby


def is_mac?
    RUBY_PLATFORM.downcase.include?("darwin")
end

def is_windows?
    RUBY_PLATFORM.downcase.include?("mswin")
end

def is_linux?
    RUBY_PLATFORM.downcase.include?("linux")
end


class File
   def pputs(arg1, *rest)
        Kernel.puts(arg1, *rest)
        self.puts(arg1, *rest)
   end
   def pprint(arg1, *rest)
        Kernel.print(arg1, *rest)
        self.print(arg1, *rest)
   end
end

def header(f)
    f.puts
    f.pputs "="*79
#TODO branch for OSX uname
    f.pputs `date`
    f.pputs `uname -srp` if is_mac?
    f.pputs `uname -srpi` if is_linux?
    f.pputs `git svn info | grep Revision`
    f.pputs "="*79
end


def benchmarks(f, list)
    maxNameLength = 0
    list.each { |l|
        maxNameLength = [maxNameLength, l[0].length].max    
        l.insert(1, '.') unless l.length == 3
    }
    list.each { |l|
        f.pprint "#{l[0].chomp.ljust maxNameLength} "
        f.pputs `cd #{l[1]}; #{Dir.pwd}/../time.rb 10 #{l[2]}`.chomp
    }
end

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
    ['Python 2.6 Parse', 'python2.6 fibParse.py'],
    ['Python 2.6',       'python2.6 fib.py'],

    ['Python 3.0 Parse', 'python3.0 fibParse.py'],
    ['Python 3.0',       'python3.0 fib.py'],

    ['Python 3.1 Parse', 'python3.1 fibParse.py'],
    ['Python 3.1',       'python3.1 fib.py'],
    
    ['Ruby Parse',       './fibParse.rb'],
    ['Ruby',             './fib.rb'],

    ['Ruby 1.9 Parse',        'ruby1.9 ./fibParse.rb'],
    ['Ruby 1.9',              'ruby1.9 ./fib.rb'],
    ['Ruby 1.9 MessageSends', 'ruby1.9 ./fibAll.rb'],
    
    ['Ruby 1.9.1 Parse',        'ruby1.9.1 ./fibParse.rb'],
    ['Ruby 1.9.1',              'ruby1.9.1 ./fib.rb'],
    ['Ruby 1.9.1 MessageSends', 'ruby1.9.1 ./fibAll.rb'],
    
    ["#{`gst --version | grep version`} Parse", 'gst -f fibParse.gst' ],
    [`gst --version | grep version`,            'gst -f fib.gst' ],

    ['Pinocchio Parse', '../../', 
        './pinocchio benchmark/fib/fibParse.p'],
    ['Pinocchio', '../../', 
        './pinocchio benchmark/fib/fib.p'],
]

B2 = [
    ['Ruby MessageSends', './fibAll.rb'],
    ['Ruby 1.9 MessageSends', 'ruby1.9 ./fibAll.rb'],
    ['Ruby 1.9.1MessageSends', 'ruby1.9.1 ./fibAll.rb'],
    ['Pinocchio metacircular', '../../', 
        './pinocchio benchmark/fib/fibMetaCircular.p'],
    
]

if __FILE__ == $0
    def dir 
        begin 
            return File.readlink $0
        rescue
            return $0
        end 
    end 
    Dir.chdir File.dirname dir 
    #TODO save in hostname files
    File.open("results/#{`uname -n`.chomp}.txt", 'a') { |f|
        header(f)
        benchmarks(f, BENCHMARKS) 
    }
end
