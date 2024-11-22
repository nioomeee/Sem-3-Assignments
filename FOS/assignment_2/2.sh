#!bin/bash
# Write a shell script to read n and generate a pattern given below
# 1
# 2 3
# 4 5 6
# 7 8 9 10

read -p "Enter number of rows: " n
num=1

for ((i = 0; i < n; i ++)); do
    for((j = 0; j <= i; j ++)); do
        echo -n "$num "
        num=$((num+1))
    done
    echo
done