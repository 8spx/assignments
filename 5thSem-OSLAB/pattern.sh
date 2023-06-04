#!/bin/bash

echo "Enter Number of Lines: "
read a

echo "Enter Your Choice"
echo "1. Pattern 1"
echo "2. Pattern 2"
echo "3. Pattern 3"

read c 

case $c in
1)  for((i=0;i<=$a;i++))
    do
        for((j=0;j<$i;j++))
        do
            echo -n "*"
        done
    echo ""
    done;;
2) for((i=0;i<=$a;i++))
    do
        for((j=$i;j<=$a;j++))
        do
            echo -n " "
        done
        for((j=0;j<$i;j++))
        do
            echo -n "*"
        done
    echo ""
    done;;
3) for((i=0;i<=$a;i++))
    do
        for((j=$i;j<=$a;j++))
        do
            echo -n " "
        done
        for((j=0;j<(2*$i-1);j++))
        do
            echo -n "*"
        done
    echo ""
    done;;
esac 
