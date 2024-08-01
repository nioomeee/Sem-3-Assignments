# Write a shell script to create two files f1 and f2 and perform the following operation.

# creating 2 files
touch f1.txt
touch f2.txt

# writing conten in files
echo "This is file 1" > f1.txt
echo "This is file 2" > f2.txt

# displaying content of both files
cat f1.txt
cat f2.txt

#  • Compare these two files.
cmp f1.txt f2.txt

#  • Display the difference of these two files.
diff f1.txt f2.txt

#  • Display the common between these two files
comm f1.txt f2.txt