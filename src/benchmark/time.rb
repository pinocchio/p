#! /usr/bin/env ruby

require 'open3'

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
    def precision
        return 10 if self == 0
        v = self.to_s
        precision = 0
        v.each_char { |c|
            return [1, precision].max unless c == '0' or c == '.'
            precision += 1
        }
    end
end


# =============================================================================

count = ARGV[0].to_i
cmd = ARGV[1..-1].join(' ')

probes = []

count.times {
    a = `(time #{cmd}) 2>&1`
    next unless $?.success?
    a = a.grep(/user/).first
    time =  a.match(/([0-9]+\.[0-9]+)/)[1].to_f
    time += $1.to_f * 60 if a.match(/([0-9]+)m/)
    probes.push(time)
}

# =============================================================================
if not probes.empty?
    stdev  = probes.stdev
    format = "%.#{stdev.precision}f"
    value  = sprintf(format+"    ±   "+format, probes.mean, stdev)
    puts "#{probes.length}  #{value}" 
else 
    puts "#{probes.length}"
end
