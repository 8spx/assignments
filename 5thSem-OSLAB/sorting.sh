#!/bin/bash
echo "Enter Your Choice"
echo "1. Bubble Sort"
echo "2. Insertion Sort"

read c 

case $c in
1)  echo "Enter Number of Elements:"
    read n
    echo "Enter Elements:"
    for((i=0;i<$n;i++))
    do
    read arr[$i]
    done
    echo "All Elements Are:"
    echo "${arr[@]}"
    for((i=0;i<$((n-1));i++))
    do
        for((j=0;j<$((n-i));j++))
        do
            if [ ${arr[$j]} -gt ${arr[$j+1]} ]
            then
                t=${arr[$j]}
                arr[$j]=${arr[$j+1]}
                arr[$j+1]=$t
            fi
        done
    done 
    echo "After Bubble Sort:"
    echo "${arr[@]}";;
2) echo "Enter Number of Elements:"
    read n
    echo "Enter Elements:"
    for((i=0;i<$n;i++))
    do
    read arr[$i]
    done
    echo "All Elements Are:"
    echo "${arr[@]}"
    for((i=1;i<$n;i++))
    do
        key=${arr[$i]}
        j=$((i-1))
        while [ $j -ge 0 ] && [ ${arr[$j]} -gt $key ]
        do
            arr[$j+1]=${arr[$j]}
            j=$((j-1))
        done
        arr[$j+1]=$key 
    done 
    echo "After Insertion Sort:"
    echo "${arr[@]}";;

esac 