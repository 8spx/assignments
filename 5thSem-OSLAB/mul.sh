#!/bin/bash

echo "Enter a Number: "
read a
echo "Enter another Number: "
read b

echo "The Value of Multiplication is: "
m=$(( $a * $b ))
echo $m

