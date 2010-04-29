#! /usr/bin/env ruby


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
        v = self.to_s
        precision = 0
        v.each_char { |c|
            return precision unless c == '0' or c == '.'
            precision += 1
        }
    end
end


# =============================================================================

count = ARGV[0].to_i
cmd = ARGV[1]

probes = []

count.times {
    a = `(time ./fibRuby.rb) 2>&1 | grep real`
    time =  a.match(/([0-9]+\.[0-9]+)/)[1].to_f
    time += a.match(/([0-9]+)m/)[1].to_f * 60
    probes.push(time)
}

# =============================================================================
stdev = probes.stdev
format = "%.#{stdev.precision}f"

value = sprintf(format+" ±"+format, probes.mean, stdev)
puts "#{count} #{value}"
