# Write a shell script for a simple calculator to perform addition, subtraction, multiplication, 
# division using case statements.

read -p "Enter 1st number: " a
read -p "Enter 2nd number: " b

echo "\nChoose your option: \n"
echo "\n 1 - Addition \n"
echo "\n 2 - Subtraction \n"
echo "\n 3 - Multiplication \n"
echo "\n 4 - Division \n"
read -p "Enter your choice: " op

case $op in
1)
echo "$a + $b = $((a+b))\n"
;;
2)
echo "$a - $b = $((a-b))\n"
;;
3)
echo "$a * $b = $((a*b))\n"
;;
4)
echo "$a / $b = $((a/b))\n"
;;
*)
echo "Enter proper operation\n"
;;
esac