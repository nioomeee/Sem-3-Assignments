#!bin/bash
# Write a shell script to print even numbers from 1 to 100. Make use of continue keyword.

for ((i = 1; i <= 100; i++)); do
    if [ $((i%2)) -ne 0 ]; then 
        continue
    fi
    echo "$i"
done