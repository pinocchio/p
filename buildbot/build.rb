#!/usr/bin/env ruby

require 'pathname'

$srcPath = Pathname.new(ARGV[0]).realpath.to_s

Dir["stages/*"].sort.each { |script|
    puts script
    if File.executable? script
        system(script, $srcPath)
    end
}

