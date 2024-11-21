# Write a shell script to create a file f1 with following contents:
# No Item_Name Quantity Price
# 1 Mangoes 45 $3.45
# 2 Apples 25 $2.45
# 3 Pineapples 5 $4.45
# 4 Tomatoes 25 $3.45
# 5 Onions 15 $1.45
# 6 Bananas 30 $3.45
# Display '*' at end of each record having quantity greater than 15
cat > f1 <<EOF
1 Mangoes 45 $3.45
2 Apples 25 $2.45
3 Pineapples 5 $4.45
4 Tomatoes 25 $3.45
5 Onions 15 $1.45
6 Bananas 30 $3.45
EOF

awk '{($2>15)?printf("%s*\n",$0):printf("%s\n",$0)}' < f1.txt
