#!/bin/bash
# Write a shell script to read n and generate a pattern given below
# 1
# 1 2
# 1 2 3
# 1 2 3 4

read -p "Enter number of rows: " n

for ((i=1; i<=n; i++)); do
    for ((j=1; j<=i; j++)); do
        echo -n "$j "
    done
    echo
done
