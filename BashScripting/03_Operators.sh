#!/bin/bash

echo "I will perform arithematics for you"

read -p "Enter first number: " n1
read -p "Enter second number: " n2

#Addition
echo "${n1} + ${n2} = " $((n1+n2))

#Subtraction
echo "${n1} - ${n2} = " $((n1-n2))

#Multiplication
echo "${n1} * ${n2} = " $((n1*n2))

#Division
echo "${n1} / ${n2} = " $((n1/n2))

#Remainder
echo "${n1} % ${n2} = " $((n1%n2))

#Increment
echo "${n1}++ = " $((n1++))
echo "++${n1} = " $((++n1))

#Decrement
echo "${n2}-- = " $((n2--))
echo "--${n2} = " $((--n2))
