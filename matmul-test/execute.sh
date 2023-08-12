start=`date +%s%N` 
cat matmul_input.txt | ./a.out
end=`date +%s%N`
echo Execution time `expr $end - $start` nanoseconds
