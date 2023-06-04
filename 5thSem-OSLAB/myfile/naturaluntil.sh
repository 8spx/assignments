#!/bin/bash

echo "Enter Upper Bound: "
read a
echo "The First $a Natural Numbers Are:"
i=1
until [ $i -gt 10 ]
do
    echo $i
    i=`expr $i + 1`
done