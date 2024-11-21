# 5. Write a shell script to accept a file name and check that given file is exist or not.If the file is
#  exist then display the file content in following format.
#  a. Display content in sorted order 
#     b. Display first five lines from the file
#  c. Display last five lines from the file   d. paste two files sequencially with “|” delimeters

read -p "Enter file name: " file

if [ -f "$file" ]; then
    sort $file
    head -n 5 $file
    tail -n 5 $file
    read -p "Enter 2nd file name: " file2
    if [ -f "$file2" ]; then
        paste -d '|' $file $file2
    else
        echo "The file $file2 doesn't exist"
    fi
else
    echo "The $file file doesn't exist"
fi