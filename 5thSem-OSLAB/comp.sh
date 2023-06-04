#!/bin/bash

echo "Input First Number"
read a
echo "Input Second Number"
read b

if [ $a -gt $b ]
then
	echo "$a is greater than $b"
else
	echo "$b is greater than $a"
fi
