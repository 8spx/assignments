#!/bin/bash

echo "Enter Number: "
read a

echo "Enter Your Choice"
echo "1. While Loop"
echo "2. For Loop"

read c 

case $c in
1)  val=1
    fact=1
    while [ $fact -le $a ]
    do
        val=$((fact*val))
        fact=`expr $fact + 1`
    done
    echo "The Factorial of $a is $val";;
2) val=1
    for(( fact=1;fact<=$a;fact++ ))
    do
        val=$((fact*val))
    done
    echo "The Factorial of $a is $val";;
esac 