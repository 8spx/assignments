#!/bin/bash

echo "Enter Upper Bound: "
read a
echo "The First $a Natural Numbers Are:"
for((i=1;i<=10;i++))
do
    echo $i
done