# Write a shell script to find a file that has not been accessed since one year.

Directory="/mnt/c/Users/Niomi/Desktop/Sem-3-Assignments/FOS/assignment_5";

find "$Directory" -type f -atime +365
