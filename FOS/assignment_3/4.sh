#  Write a shell script to create a file with following contents:
# No Item_Name Quantity Price
# 1 Pen 45 $3.45
# 2 Pencil 25 $2.45
# 3 Eraser 5 $4.45
# 4 Pen 25 $3.45
# 5 Stapler 15 $1.45
# 6 Pen 30 $3.45
# Diplay all the Records starting with 'P' character.
# Count all records having quantity =25
# Display the record with maximum price
cat > stationaries.txt <<EOF
1 Pen 45 3.45
2 Pencil 25 2.45
3 Eraser 5 4.45
4 Pen 25 3.45
5 Stapler 15 1.45
6 Pen 30 3.45
EOF

echo " Diplay all the Records starting with 'P' character: "
awk '$2 ~ /^P/ {print $0}' stationaries.txt

echo "Count all records having quantity = 25:"
awk '$3 == 25 {print $0}' stationaries.txt

echo "Display the record with maximum price: "
awk '{if($4 > max) {max=$4; line=$0}} END {print line}' stationaries.txt