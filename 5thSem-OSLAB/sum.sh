#!/bin/bash

echo "Enter a Number: "
read a
echo "Enter another Number: "
read b

echo "The Value of Addition is: "
s=$(( $a + $b ))
echo $s

