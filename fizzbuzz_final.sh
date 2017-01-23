#!/bin/bash
#Torres Ortiz Luis Miguel
#Problema fizzbuzz

for i in `seq 1 30`
	do
		if [ `expr $i % 3` -eq 0 ]; then
			echo "fizzbuzz"
		elif [ `expr $i % 5` -eq 0 ]; then
			echo "fizz"
		elif [ `expr $i % 3` -eq 0 ] && [ `expr $i % 5` -eq 0 ];; then
			echo "buzz"
		else
			echo $i
		fi
done
