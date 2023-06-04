#!/bin/bash

echo "Enter Number: "
read a
val=1
for((fact=1;fact<=$a;fact++))
do
    val=$((fact*val))
done
echo "The Factorial of $a is $val"