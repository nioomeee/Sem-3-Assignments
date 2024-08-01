# Write a script to calculate gross salary. ( DA = 60%OF BASIC, HRA = 20%
# OF BASIC, MA = 100 and IT = 15% of BASIC)

read -p "Enter basic salary: " basic

da=$(echo "0.60 * $basic" | bc)

hra=$(echo "0.20 * $basic" | bc)

ma=100

it=$(echo "0.15 * $basic" | bc)

gross=$(echo "$basic + $da + $hra + $ma - $it" | bc)

echo "Basic Salary: $basic"
echo "Dearance Allowance: $da"
echo "House rent allowance: $hra"
echo "Medical Allowance: $ma"
echo "Income Tax: $it"
echo "Gross Salary: $gross"
