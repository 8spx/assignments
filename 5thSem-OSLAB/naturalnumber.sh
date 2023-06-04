#!/bin/bash

echo "Enter Upper Bound: "
read a

echo "Enter Your Choice"
echo "1. While Loop"
echo "2. For Loop"
echo "3. Until Loop"

read c 

case $c in
1)  i=1
    echo "The First $a Natural Numbers Are:"
    while [ $i -le $a ]
    do
        echo $i
        i=`expr $i + 1`
    done;;
2) echo "The First $a Natural Numbers Are:"
    for(( i=1; i<=10; i++ ))
    do
        echo $i
    done;;
3) echo "The First $a Natural Numbers Are:"
    i=1
    until [ $i -gt 10 ]
    do
        echo $i
        i=`expr $i + 1`
    done;;
esac 
