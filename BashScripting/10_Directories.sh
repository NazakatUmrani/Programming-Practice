#!/bin/bash

read -p "Enter directory name you want to create: " dirName

for (( i=0; i<4; i++ )){
	mkdir $dirName$i
}
sleep 5
for (( i=0; i<4; i++)){
	rmdir $dirName$i
}
