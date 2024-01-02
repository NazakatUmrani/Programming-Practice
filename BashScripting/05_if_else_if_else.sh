#!/bin/bash

echo "IF Ladder"

read -p "Enter your age: " age

if [ $age -gt 18 ]
then
  echo "You can cast vote"
elif [ $age -eq 18 ]
then
  echo "apply for voter id"
elif [ $age -lt 1 ]
then
  echo "age can't be negative"
else
  echo "You can't cast vote"
fi
