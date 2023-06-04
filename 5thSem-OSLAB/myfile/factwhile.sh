#!/bin/bash

echo "Enter Number: "
read a
val=1
fact=1
while [ $fact -le $a ]
do
    val=$((fact*val))
    fact=`expr $fact + 1`
done
echo "The Factorial of $a is $val"