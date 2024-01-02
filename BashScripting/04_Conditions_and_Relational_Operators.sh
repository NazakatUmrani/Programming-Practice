#!/bin/bash

echo "Relational Operators"

read -p "Enter first number: " n1
read -p "Enter second number: " n2

# -gt => greater than
# -ge => greater than or equal to

# -lt => less than
# -le => less than or equal to

# -eq => equal to
# -ne => not equal to

# -a => and operator
# -o => or operator

if [ $n1 -gt $n2 ]
then
  echo "${n1} is greater than ${n2}"
else
  echo "${n1} is less than ${n2}"
fi
