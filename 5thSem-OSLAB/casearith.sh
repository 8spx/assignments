#!/bin/bash

echo "Enter First Number"
read a
echo "Enter Second Number"
read b

echo "Enter Your Choice"
echo "1. Addition"
echo "2. Subtraction"
echo "3. Multiplication"
echo "4. Division"

read c 

case $c in
1) echo "The Value of Addition is $(( $a + $b ))";;
2) if [ $a -gt $b ]
   then
   echo "The Value of Subtraction is $(( $a - $b ))"
   else
   echo "The Value of Subtraction is $(( $b - $a ))"
   fi;;
3) echo "The Value of Multiplication is $(( $a * $b ))";;
4) if [ $b -eq 0 ]
   then
   echo "Error: Division By 0"
   else
   echo "The Value of Division Is"
   echo "scale=3; $a/$b"| bc
   fi;;
esac 
