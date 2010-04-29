DIR=`readlink "$0"` || DIR="$0";
DIR=`dirname "$DIR"`;
cd "$DIR"
DIR=`pwd`

OUT='result.txt'

echo '===============================================' | tee -a $OUT
date | tee -a $OUT
echo '===============================================' | tee -a $OUT

cd ../../
echo -n 'Pinocchio fib: ' | tee -a $OUT
benchmark/time.rb 2 ./pinocchio benchmark/fib/fib.p | tee -a $OUT

echo -n 'Pinocchio Metacircular fib: ' | tee -a $OUT
#benchmark/time.rb 2 ./pinocchio benchmark/fib/fibMetaCircular.p | tee -a $OUT

cd $DIR
echo -n 'Ruby fib: ' | tee -a $OUT
../time.rb 10 ./fibRuby.rb | tee -a $OUT

echo -n 'Ruby Messagesend fib: ' | tee -a $OUT
../time.rb 10 ./fibRubyMessageSends.rb | tee -a $OUT

echo '' | tee -a $OUT
