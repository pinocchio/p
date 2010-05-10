#! /usr/bin/env ruby

def fib(n)
   if (n < 2)
       return 1
   end
   return fib(n-1) + fib(n-2)
end

puts 25
