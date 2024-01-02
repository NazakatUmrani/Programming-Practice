#!/bin/bash

a="Nazakat"
b=$a" "
c=""

if test "$a" = "$b"
then 
	echo "a equals to b"
else
	echo "a doesn't equals to b"
fi

if test -n "$c" #-z is inverse of -n
then
	echo "c is not empty"
else
	echo "c is empty"
fi

# lt eq and so on can also be used with test

if test -s 01_FirstScript.sh
then
	echo "File is not empty"
else
	echo "File is empty"
fi

if test -d 01
then
	echo "It is a directory"
else
	echo "It is not a directory"
fi

