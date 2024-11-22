#  Write a shell script to perform following task on student file and emp file

# a. display the student who get highest marks.  
echo "The student with highest marks: "
awk -F '|' 'BEGIN {max = 0} {if($4 > max){max = $4; line = $0}} END {print line}' student

# b. display the student who get lowest marrks
echo "the student who get lowest marrks: "
awk -F '|' 'BEGIN {min = 99} {if($4 < min){min = $4; line = $0}} END {print line}' student

# c. display the emp who get highest salary
echo "the emp who get highest salary"
awk -F '|' 'BEGIN {max=0} {if($4 > max){max = $4 ; line=$0}} END {print line}' emp.txt

# d. display the emp who get lowest salary
echo "the emp who get lowest salary"
awk -F '|' 'BEGIN {min = 9999999} {if($4 < min){min = $4 ; line = $0}} END {print line}' emp.txt