# Write a shell script to print a given number in reverse order. Make use of while loop.

read -p "Enter your number: " num

rev=0

while [ $num -gt 0 ]; do
    rem=$((num % 10))
    rev=$((rev * 10 + rem))
    num=$((num / 10))
done

echo "Reversed number = $rev"