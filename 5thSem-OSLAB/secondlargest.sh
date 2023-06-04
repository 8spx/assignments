#!/bin/bash

echo "Enter First Number"
read a
echo "Enter Second Number"
read b
echo "Enter Third Number"
read c

if [ $a -gt $b ] && [ $a -gt $c ]
then
	if [ $b -gt $c ]
	then
		echo "Second Largest is $b"
	else
		echo "Second Largest is $c"
	fi
fi
if [ $b -gt $a ] && [ $b -gt $c ]
then
	if [ $a -gt $c ]
	then
		echo "Second Largest is $a"
	else
		echo "Second Largest is $c"
	fi
fi
if [ $c -gt $a ] && [ $c -gt $b ]
then
	if [ $a -gt $b ]
	then
		echo "Second Largest is $a"
	else
		echo "Second Largest is $b"
	fi
fi


