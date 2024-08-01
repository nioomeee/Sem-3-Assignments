# Write a shell script to find biggest of three numbers
read -p "Enter 1st number: " a
read -p "Enter 2nd number: " b
read -p "Enter 3rd number: " c

if [ $a -gt $b ] && [ $a -gt $c ]; then 
echo "$a is largest"
elif [ $b -gt $a ] && [ $b -gt $c ]; then
echo "$b is largest"
else 
echo "$c is largest"
fi