#!/bin/bash

for (( i=0; i<10; i++ )){
	read -p "Enter your age: " age
	if [ $age -lt 18 ]
	then
		echo "You are not allowed in party"
		break
	else
		echo "You are allowed in party"
	fi
}

for (( j=0; j<10; j++ )){
	if [ $((j%2)) -eq 0 ]
	then
		echo "$j"
	else
		continue
	fi
}
