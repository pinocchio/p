#! /usr/bin/env ruby

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
    f.pputs `uname -srpi`
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
        f.pprint "#{l[0].ljust maxNameLength} "
        f.pputs `cd #{l[1]}; #{Dir.pwd}/../time.rb 50 #{l[2]}`.chomp
    }
end

B1 = [
    ['Python 2.6 Parse', 'python2.6 fibPythonParse.py'],
    ['Python 2.6',       'python2.6 fibPython.py'],

    ['Python 3.0 Parse', 'python3.0 fibPythonParse.py'],
    ['Python 3.0',       'python3.0 fibPython.py'],

    ['Python 3.1 Parse', 'python3.1 fibPythonParse.py'],
    ['Python 3.1',       'python3.1 fibPython.py'],

    ['Ruby Parse',       './fibRubyParse.rb'],
    ['Ruby',             './fibRuby.rb'],

    ['Ruby 1.9 Parse',   'ruby1.9 ./fibRubyParse.rb'],
    ['Ruby 1.9',         'ruby1.9 ./fibRuby.rb'],

    ['Ruby 1.9.1 Parse', 'ruby1.9.1 ./fibRubyParse.rb'],
    ['Ruby 1.9.1',       'ruby1.9.1 ./fibRuby.rb'],
]

BENCHMARKS = [
    ['Python 2.6 Parse', 'python2.6 fibPythonParse.py'],
    ['Python 2.6',       'python2.6 fibPython.py'],

    ['Python 3.0 Parse', 'python3.0 fibPythonParse.py'],
    ['Python 3.0',       'python3.0 fibPython.py'],

    ['Python 3.1 Parse', 'python3.1 fibPythonParse.py'],
    ['Python 3.1',       'python3.1 fibPython.py'],
    
    ['Ruby Parse',       './fibRubyParse.rb'],
    ['Ruby',             './fibRuby.rb'],

    ['Ruby 1.9 Parse',   'ruby1.9 ./fibRubyParse.rb'],
    ['Ruby 1.9',         'ruby1.9 ./fibRuby.rb'],
    ['Ruby 1.9 MessageSends', 'ruby1.9 ./fibRubyMessageSends.rb'],
    
    ['Ruby 1.9.1 Parse', 'ruby1.9.1 ./fibRubyParse.rb'],
    ['Ruby 1.9.1',       'ruby1.9.1 ./fibRuby.rb'],
    ['Ruby 1.9.1 MessageSends', 'ruby1.9.1 ./fibRubyMessageSends.rb'],
    
    ['Pinocchio Parse', '../../', 
        './pinocchio benchmark/fib/fibParse.p'],
    ['Pinocchio', '../../', 
        './pinocchio benchmark/fib/fib.p'],
]

B2 = [
    ['Ruby MessageSends', './fibRubyMessageSends.rb'],
    ['Ruby 1.9 MessageSends', 'ruby1.9 ./fibRubyMessageSends.rb'],
    ['Ruby 1.9.1MessageSends', 'ruby1.9.1 ./fibRubyMessageSends.rb'],
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
