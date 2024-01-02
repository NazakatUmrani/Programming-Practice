#!/bin/bash


#!/bin/bash

read -p "Enter file name you want to create: "fileName

for (( i=0; i<4; i++ )){
	touch $fileName$i
}
sleep 5
for (( i=0; i<4; i++)){
	rm $fileName$i
}
