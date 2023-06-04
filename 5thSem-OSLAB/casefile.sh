#!/bin/bash
echo "Enter Your Choice"
echo "1. Copy A File"
echo "2. Remove A File"
echo "3. Move A File"
echo "4. Rename A File"

read c 

case $c in
1)  echo "Enter Source File: "
    read a 
    echo "Enter Target Directory: "
    read b
    echo $(cp "$a" "$b");;
2) echo "Enter Source File: "
   read a 
   echo $(rm "$a");;
3) echo "Enter Source File: "
   read a 
   echo "Enter Target Directory: "
   read b
   echo $(mv "$a" "$b");;
4) echo "Enter Source File: "
   read a 
   echo "Enter New name: "
   read b
   echo $(mv "$a" "$b");;
esac 