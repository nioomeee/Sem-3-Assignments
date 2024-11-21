# Write a shell script to create an emp file with following format and perform the following
#  task
#  eno|ename|city|salary
#  a. display first 3 lines from emp file 
# c. display emp file in sorted order  
# b. display last 3 lines from emp file
#  d. display eno and city from emp file
cat > emp.txt <<EOF
101|Anil|Delhi|25000
102|Sunil|Mumbai|30000
103|Anil|Delhi|25000
104|Ramesh|Banglore|35000
105|Suresh|Chennai|40000
106|Mahesh|Delhi|28000
107|Naresh|Mumbai|33000
108|Rajesh|Banglore|38000
109|Mukesh|Chennai|43000
110|Dinesh|Delhi|30000
EOF

echo "display first 3 lines from emp file: "
head -n 3 emp.txt

echo "display last 3 lines from emp file: "
tail -n 3 emp.txt

echo "display emp file in sorted order: "
sort emp.txt

echo "display eno and city from emp file"
awk -F '|' '{print $1, $3}' emp.txt
