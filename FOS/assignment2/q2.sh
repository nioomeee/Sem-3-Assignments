#!bin/bash
# Write a shell script to read n and generate a pattern given below
# 1
# 2 3
# 4 5 6
# 7 8 9 10

read -p "ENter a number: " n

num=1
for ((i = 1; i <= n; i++)); do
    for ((j = 1; j <= i; j++)); do
        printf "%d " $num
        num=$((num+1))
    done
    echo
done
        

