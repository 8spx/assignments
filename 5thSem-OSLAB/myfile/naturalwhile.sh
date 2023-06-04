#!/bin/bash

echo "Enter Upper Bound: "
read a
i=1
echo "The First $a Natural Numbers Are:"
while [ $i -lt $a ]
do
    echo $i
    i=`expr $i + 1`
done