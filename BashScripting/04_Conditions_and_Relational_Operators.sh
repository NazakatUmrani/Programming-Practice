#!/bin/bash

echo "Relational Operators"

read -p "Enter first number: " n1
read -p "Enter second number: " n2

if [ $n1 -gt $n2 ]
then
  echo "${n1} is greater than ${n2}"
fi
