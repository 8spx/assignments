#!/bin/bash

echo "Enter Number of Elements:"
read n
echo "Enter Elements:"
for((i=0;i<$n;i++))
do
read arr[$i]
done

echo "All Elements Are:"
echo "${arr[@]}"