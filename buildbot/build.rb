#!/usr/bin/env ruby

require 'pathname'

Dir["stages/*"].sort.each { |script|
    puts script
    if File.executable? script
        system(script, ARGV[0])
    end
}

