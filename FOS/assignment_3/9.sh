# Write a shell script to perform following task on student file
#  a. cut city from student file and store it in new file
awk -F '|' '{print $3}' student > city.txt

#  b. cut rno and marks from student file and store it in marks file
awk -F '|' '{print $1,$4}' student > marks.txt

#  c. display the student who get highest marks
awk -F '|' 'BEGIN {max=0} {if($4 > max){max = $4; line = $0}} END {print line}' student

#  d. display only numbers from student file
grep -o '[0-9]\+' student