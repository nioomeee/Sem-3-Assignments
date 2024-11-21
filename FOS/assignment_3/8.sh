# 3. Write a shell script to create student file as follow and perform the task
# rno name city marks
# a. display emp and student file horizontally
# b. display emp and student file sequence wise with tab delimeter.
# c. join emp and student file and display result.
# d. sort marks in reverse order
cat > student <<EOF
101|Anil|Delhi|80
102|Sunil|Mumbai|70
103|Anil|Delhi|85
104|Ramesh|Banglore|90
105|Suresh|Chennai|75
106|Mahesh|Delhi|82
107|Naresh|Mumbai|78
108|Rajesh|Banglore|88
109|Mukesh|Chennai|92
110|Dinesh|Delhi|72
EOF

echo "display emp and student file horizontally: "
paste emp.txt student
echo 

echo "display emp and student file sequence wise with tab delimeter."
paste -s -d '\t' emp.txt student
echo 

echo " join emp and student file and display result."
join -t '|' emp.txt student
echo

echo "sort marks in reverse order"
sort -t '|' -k4 -nr student
