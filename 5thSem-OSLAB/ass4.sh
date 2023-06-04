#!/bin/bash

echo "A) Sum Of Digits Calculation:-"

echo "Enter A Number:"
read number
function sumofdigits()
{
    sum=0
    while [ $number != 0 ]
    do
        let sum=$sum+$number%10
        let number=$number/10 
    done
}
sumofdigits $number
echo "Sum of Digits Of Number $sum"


echo "B) Reverse Of Number:-"

echo "Enter A Number:"
read number
function reversenumber()
{
    revnum=0
    lastdgt=0
    while [ $number != 0 ]
    do
        let lastdgt=$number%10
        let revnum=($revnum*10)+lastdgt
        let number=$number/10
    done
}
reversenumber $number
echo "Reverse Number $revnum"

echo "C) Check Prime:-"

echo "Enter A Number:"
read number
prm=1
sq=$(bc <<< "scale=0; sqrt($number)")
function primedetect()
{
    for((i=2;i<$sq;i++))
    do
        if [ $((number%i)) == 0 ]
        then
            prm=0
            break
        fi
    done
}
primedetect $number
if [ $prm == 0 ]
then
    echo "$number Is Not A Prime Number."
else
    echo "$number Is A Prime Number."
fi