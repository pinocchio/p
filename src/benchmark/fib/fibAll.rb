#! /usr/bin/env ruby
#
class TrueClass
   def ifTrueIfFalse(ifTrue, ifFalse)
       ifTrue.call()
   end
end

class FalseClass
   def ifTrueIfFalse(ifTrue, ifFalse)
       ifFalse.call()
   end
end

class Fixnum
   def fib
       (self < 2).ifTrueIfFalse(
           lambda { 1 },
           lambda { (self - 1).fib + (self - 2).fib })
   end
end

puts 30.fib
