# Write a shell script to accept a file name from user and check that given file is exist or not if
#  the file exist then check that given file is in sorted order or not if the file is not in sorted
#  order then display file in sorted oreder in descending

read -p "Enter the file name: " file

if [ -f $file ]; then 
    if sort -c "$file" > /dev/null 2>&1; then
        echo "the file is already sorted"
    else
        sort -r "$file"
    fi

else
    echo "$file file doesn't exist"
fi