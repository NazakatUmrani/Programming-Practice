#!/bin/bash

read -p "Enter your grade (A-F): " grade

case $grade in
  A)
		echo "your marks are between 90-100" 
		;;
  B)
		echo "your marks are between 80-90" 
		;;
  C)
		echo "your marks are between 70-80" 
		;;
  D)
		echo "your marks are between 60-70" 
		;;
  E)
		echo "your marks are between 50-60" 
		;;
	F)
    echo "you are fail"
		;;
  *)
    echo "Not a valid input for grade"
esac
