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
        $stdout.flush
        self.print(arg1, *rest)
   end
end


# ============================================================================
class Array
    def sum
        self.inject( nil ) { |sum,x| 
            sum ? sum+x : x 
        }
    end

    def mean
        1.0 * self.sum / self.size
    end
    
    def stdev
        sq = 0
	    m = self.mean
    	self.each { |i|
		    sq += (i-m)*(i-m)
        }
        sq /= self.length
	    return Math.sqrt(sq)
    end
end

class Float
    def closeTo?(number)
        (self - number).abs < 0.00000000001
    end

    def precision
        return 10 if self.closeTo? 0
        v = self.to_s
        precision = 0
        v.each_char { |c|
            return [1, precision].max unless c == '0' or c == '.'
            precision += 1
        }
    end
end

# =============================================================================
class ScriptTest
    attr_reader :script, :probeCount, :min, :max, :mean, :stdev, :dir
    attr_writer :script, :probeCount, :dir

    def initialize(script, probeCount=10, useUserTime=false)
        @script      = script
        @probeCount  = probeCount
        @useUserTime = useUserTime
        @dir         = Dir.pwd
    end

    def reset
        @probes = []
        @min    = 0
        @max    = 0
        @mean   = 0
        @stdev  = 0
    end

    def run
        self.reset
        self.probe
        self.stats
    end
    
    def probe
        cdCMD, script = self.scriptLocation
        puts "#{cdCMD}(time #{script}) 2>&1"
        timeCMD = 'time'
        if is_linux?
            timeCMD = "time --format='real %e\nuser %U\nsystem %S'"
        end
        @probeCount.times {|i|
            result = `#{cdCMD}(#{timeCMD} #{script}) 2>&1`
            next unless $?.success?
            if @useUserTime
                result = result.grep(/user/).first
            else 
                result = result.grep(/real/).first
            end
            time  = result.match(/([0-9]+\.[0-9]+)/)[1].to_f
            time += $1.to_f * 60 if result.match(/([0-9]+)m/)
            @probes.push(time)
        }
        puts @probes
    end

    def scriptLocation
        executable = @script.split.first
        return '', @script unless executable.include? '/'
        pos = executable.rindex '/'
        return "cd #{@script[0..pos]}; ", "./#{@script[pos+1..-1]}"
    end

    def stats
        return if @probes.empty?
        @mean  = @probes.mean
        @stdev = @probes.stdev
        @min   = @probes.min 
        @max   = @probes.max
    end

    def empty?
        @probes.nil? or @probes.empty?
    end

    def to_s
        return "0" if @probes.nil?
        return "#{@probes.length}" if self.empty?
        format = "%.#{@stdev.precision}f"
        value  = sprintf(format+"   ±   "+format, @mean, @stdev)
        "#{@probes.length}  #{value}" 
    end
end

# ============================================================================
class Test

    def self.createFrom(description)
        version = nil
        if description.length == 4
            version = description.shift
        end
        return self.new(description[0], description[1], description[2], version)
    end

    # ------------------------------------------------------------------------
    attr_reader :executable, :testFile, :parseFile, :mean, :stdev, :min, :max,
                :dir
    attr_writer :dir

    def initialize(executable, testFile, parseFile=nil, version=nil)
        @executable = executable
        @testFile   = testFile
        @parseFile  = parseFile
        @version    = version
        @dir        = Dir.pwd
        @version    = @version.strip unless @version.nil?
        self.version
    end

    def version
        return @version               unless @version.nil?
        return @executable.capitalize unless self.executableExists?
        version = `#{@executable} --version 2>&1`.strip
        return version unless version.include? "\n"
        return version.split.first.strip
    end

    def reset
        @skipped        = false
        @testFileProbe  = nil
        @parseFileProbe = nil
        @mean           = 0
        @stdev          = 0
        @min            = 0
        @max            = 0
    end

    def run
        self.reset
        if not self.executableExists?
            @skipped = true
            return
        end
        if @parseFile.nil?
            self.runSingle      
        else
            self.runBoth
        end
    end

    def executableExists?
        not `which #{@executable}`.chomp.empty?
    end

    def runBoth
        self.runSingle
        @parseFileProbe = self.runScriptTest(@parseFile)
        puts "(1)", @parseFileProbe
        if @parseFileProbe.empty?
            @skipped = true
        end
        @mean  -= @parseFileProbe.mean
        @stdev += @testFileProbe.stdev
        @min   -= @testFileProbe.min
        @max   -= @testFileProbe.max
    end

    def runSingle
        @testFileProbe = self.runScriptTest(@testFile)
        puts "(0)", @testFileProbe
        if @testFileProbe.empty?
            @skipped = true
        end
        @mean  = @testFileProbe.mean
        @stdev = @testFileProbe.stdev
        @min   = @testFileProbe.min
        @max   = @testFileProbe.max
    end
        
    def runScriptTest(script)
        script    = "#{@dir}/#{script}" unless script[0] == '/'
        probe     = ScriptTest.new("#{@executable} #{script}")
        probe.dir = @dir
        probe.run
        return probe
    end

    def to_s
        return "--skipped--" if @skipped
        format = "%.#{@stdev.precision}f"
        sprintf("#{format} ± #{format}    %f    %f", @mean, @stdev, @min, @max)
    end
end
    
# ============================================================================
class Benchmark

    def self.createFrom(description)
        benchmark = self.new
        benchmark.load description
        return benchmark
    end

    # ------------------------------------------------------------------------
    def initialize(tests=[], dir=nil)
        @tests, @dir = tests, dir
        @dir   = Dir.pwd if @dir.nil?
    end
    
    def load(description)
        description.each { |array|
            self.add Test.createFrom(array)
        }
    end

    # ------------------------------------------------------------------------
    def add(test)
        @tests.push test
        test.dir = @dir
    end

    def size
        @tests.size
    end

    def empty?
        @tests.empty?
    end

    def svn?
        File.exists? "#{@dir}/.svn"    
    end

    # ------------------------------------------------------------------------
    def header
        @resultsFile.puts
        @resultsFile.pputs "="*79
        @resultsFile.pputs `date`
        @resultsFile.pputs `uname -srp`  if is_mac?
        @resultsFile.pputs `uname -srpi` if is_linux?
        if self.svn?
            @resultsFile.pputs `svn info | grep Revision`
        else
            @resultsFile.pputs `git svn info | grep Revision`
        end
        @resultsFile.pputs "="*79
    end

    def benchmarks
        maxVersionNameLength = 0
        @tests.each { |test|
            maxVersionNameLength = [maxVersionNameLength, test.version.length].max    
        }
        @tests.each { |test|
            @resultsFile.pprint "#{test.version.ljust maxVersionNameLength} "
            test.run 
            @resultsFile.pputs test.to_s
        }
    end

    def changeDir
        def dir 
            begin 
                return File.readlink $0
            rescue
                return $0
            end 
        end 
        Dir.chdir File.dirname dir 
    end

    def run
        self.changeDir
        File.open("results/#{`uname -n`.chomp}.txt", 'a') { |f|
            @resultsFile = f
            self.header
            self.benchmarks 
        }
    end
end

