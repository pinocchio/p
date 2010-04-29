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
    f.pputs "="*79
    f.pputs `date`.chomp + " | " + `uname -srpi`
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
        f.pputs `cd #{l[1]}; #{Dir.pwd}/../time.rb 10 #{l[2]}`.chomp

    }
end

BENCHMARKS = [
    ['Ruby', './fibRuby.rb'],
    ['Ruby 1.9', 'ruby1.9 ./fibRuby.rb'],
    ['Ruby 1.9.1', 'ruby1.9.1 ./fibRuby.rb'],
    ['Pinocchio', '../../', 
        './pinocchio benchmark/fib/fib.p'],
    
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
    File.open('result.txt', 'a') { |f|
        header(f)
        benchmarks(f, BENCHMARKS) 
    }
end
