#!/bin/bash

# Simple Function
greetings(){
	echo "Hello World"
}

greetings; greetings

# Parameterized Function
sum(){
	a=$1
	b=$2
	echo "Sum of $a + $b = " $((a+b))
}

sum 15 56

# Returning value
returnMyValue(){
	a=4
	return $a
}

returnMyValue
myValue=$?
echo "Returned value is $myValue"
