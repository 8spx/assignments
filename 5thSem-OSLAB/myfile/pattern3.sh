#!/bin/bash

echo "Enter Number of Lines: "
read a

for((i=0;i<$a;i++))
do
    for((j=$i;j<$a;j++))
    do
        echo -n " "
    done
    for((j=0;j<(2*$i-1);j++))
    do
        echo -n "*"
    done
echo ""
done