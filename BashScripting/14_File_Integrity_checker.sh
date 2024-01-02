#!/bin/bash

generatedHash="22f25cedf837c8160e46d0ca982d02f9  13_Functions.sh"
output=$(md5sum 13_Functions.sh)
if [ "$generatedHash" == "$output" ]
then
	echo "File is not changed"
else
	echo "File has been changed"
fi
