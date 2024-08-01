# Write a shell script to accept two strings from user and check if both strings are equal or not.

read -p "Enter 1st string: " str1
read -p "Enter 2nd string: " str2

if [ "$str1" = "$str2" ]; then
echo "Both strings are equal"
else
echo "Both strings are not equal"
fi
