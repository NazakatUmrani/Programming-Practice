#!/bin/bash

# Three types of loop For, While, Until

array=(Python Java C++ C Ruby)

# For loop
for ((i=0; i<5; i++)){
	echo "${array[i]}"
}
for i in 1 2 3 4 5 6 7 8 9 10
do
	echo "Software"
done

# While loop
i=0
while [ $i -le 5 ];
do
	echo "It is less"
	let i++;
done

# Until loop - runs until condition is false
j=0
until [ $j -gt 4 ]
do
	echo "until is running"
	let j++
done
