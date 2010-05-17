# ============================================================================
def is_mac?
    RUBY_PLATFORM.downcase.include?("darwin")
end

def is_windows?
    RUBY_PLATFORM.downcase.include?("mswin")
end

def is_linux?
    RUBY_PLATFORM.downcase.include?("linux")
end

# ============================================================================
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

# ============================================================================
def header(f)
    f.puts
    f.pputs "="*79
#TODO branch for OSX uname
    f.pputs `date`
    f.pputs `uname -srp` if is_mac?
    f.pputs `uname -srpi` if is_linux?
    # TODO check for svn / git repos
    f.pputs `git svn info | grep Revision`
    f.pputs "="*79
end


# ============================================================================
def benchmarks(f, list)
    maxNameLength = 0
    list.each { |l|
        maxNameLength = [maxNameLength, l[0].length].max    
        l.insert(1, '.') unless l.length == 3
    }
    list.each { |l|
        f.pprint "#{l[0].chomp.ljust maxNameLength} "
        run   = `cd #{l[1]}; #{Dir.pwd}/../time.rb 10 #{l[2]}`.chomp
        parse = `cd #{l[1]}; #{Dir.pwd}/../time.rb 10 #{l[2]}`.chomp
    }
end

# ============================================================================
def runBenchmarks()
    def dir 
        begin 
            return File.readlink $0
        rescue
            return $0
        end 
    end 
    Dir.chdir File.dirname dir 
    File.open("results/#{`uname -n`.chomp}.txt", 'a') { |f|
        header(f)
        benchmarks(f, BENCHMARKS) 
    }
end

