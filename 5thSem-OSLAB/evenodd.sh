#!/bin/bash

echo "Enter A Number"
read a

if [ $((a%2)) -eq 0 ]
then
	echo "Even Number"
else
	echo "Odd Number"
fi
