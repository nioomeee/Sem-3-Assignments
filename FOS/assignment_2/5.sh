# Write a shell script to check if the number is prime or not. Make use of break keyword.

read -p "Enter a number: " num

for ((i = 2; i <= num/2; i++)); do
    if [ $((num % i)) -eq 0 ]; then
        echo "$num is not a prime number"
        break
    fi
done

if [ $i -gt $((num / 2)) ]; then
    echo "$num is prime number"
fi

