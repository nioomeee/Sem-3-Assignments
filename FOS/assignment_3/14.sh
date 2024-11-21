#  Write a shell script to perform following task on student file and emp file
# a. display the student who get highest marks.  
echo "The student with highest marks: "
awk 'BEGIN {max = 0} {if($4 + 0 > max){max = $4 + 0; line = $0}} END {print line}' student

# b. display the student who get lowest marrks
echo "the student who get lowest marrks: "
awk 'BEGIN {min = 999} {if($4 + 0 < min){min = $4 + 0; line = $0}} END {print line}' student

# c. display the emp who get highest salary
echo "the emp who get highest salary"
awk -F '|' 'BEGIN {max=-1} {if($4 + 0 > max){max=$4 + 0; line=$0}} END {print line}' emp.txt

# d. display the emp who get lowest salary
echo "the emp who get lowest salary"
awk -F '|' 'BEGIN {min = 99999} {if($4 + 0 < min){min = $4 + 0; line = $0}} END {print line}' emp.txt