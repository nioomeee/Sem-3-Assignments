# An employee Basic salary is input through keyboard where da is 40% of basic salary and hra is 
# 20% of basic salary. Write a program to calculate gross salary

read -p "Enter basic salary : " basic

da=$(echo "0.4 * $basic" | bc)
hra=$(echo "0.2 * $basic" | bc)
gross=$(echo "$basic + $da + $hra" | bc)

echo "Basic salary = $basic"
echo "Dearance allowance = $da"
echo "House rent allowance = $hra"
echo "Gross salary = $gross"