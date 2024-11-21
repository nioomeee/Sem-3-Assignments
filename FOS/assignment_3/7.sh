# Write a shell script to perform following task on emp file
#  a. display eno,ename and city from emp file
awk -F '|' '{print $1 $2 $3}' emp.txt

#  b. display ename like only 2 character should display in one line
awk -F '|' '{print substr($2, 1, 2)}' emp.txt

#  c. display ename in capital latters from emp file
awk -F '|' '{print toupper($2)}' emp.txt

#  d. display emp file with tab delimeters.
awk -F'|' 'BEGIN {OFS="\t"} {print $1, $2, $3, $4}' emp.txt

