#!/bin/bash

arrayList=(Nazakat Faizan Abrar Aamir)

echo "Array Element one: " ${arrayList[0]}
echo "Array Element two: " ${arrayList[1]}
echo "Array Element three: " ${arrayList[2]}
echo "Array Element four: " ${arrayList[3]}

echo "All array elements: " ${arrayList[*]}
echo "All array elements: " ${arrayList[@]}
