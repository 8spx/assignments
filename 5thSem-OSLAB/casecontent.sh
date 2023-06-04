#!/bin/bash
echo "Enter Your Choice"
echo "1. Content of Current Folder"
echo "2. Present Working Directory"
echo "3. Calender"
echo "4. Exit"

read c 

case $c in
1) echo "$(ls)";;
2) echo "$(pwd)";;
3) echo "$(cal)";;
4) exit 0;;
esac 