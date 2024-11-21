#  Write a shell script to accept a file name from user and check that given file exist or not, if
#  the file exist then display all the file content.

read -p "Enter the file name: " file

if [ -f $file ]; then 
    cat $file
else
    echo "$file file doesn't exist"
fi
