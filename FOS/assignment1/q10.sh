#  Write a shell script to find biggest of two numbers.
read -p "Enter 1st number: " a
read -p "ENter 2nd number: " b

if [ $a -gt $b ]; then
echo "$a is greater"
else echo "$b is greater"
fi