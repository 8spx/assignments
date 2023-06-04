#!/bin/bash

echo "Enter Number of Elements:"
read n
s=0
echo "Enter Elements:"
for((i=0;i<$n;i++))
do
read arr[$i]
done

for((i=0;i<$n;i++))
do
s=$(($s+${arr[$i]})) 
done
echo "Sum is:"
echo "$s"