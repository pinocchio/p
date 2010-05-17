#! /usr/bin/env lua


function fib(n)
   if (n < 2) then return 1 end
   return fib(n-1) + fib(n-2)
end

io.stdout:write(fib(30))
