#!bin/bash
# Write a shell script to read number from user and print its multiplication table.

read -p "ENter a number: " num

for ((i = 1; i <= 10 ; i++)); do
    ans=$((num*i))
    echo "$num x $i = $ans"
done