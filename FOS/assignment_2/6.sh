# Save the list of all the files using output redirection into a file named “File_list”and make this 
# “File_list” an executable file only. Then check for that file in another script if it is readable, writable
# or executable or not

ls -l > File_list

chmod +x File_list

if [ -r File_list ]; then
    echo "File_list is readable"
fi

if [ -w File_list ]; then
    echo "File_list is writable"
fi

if [ -x File_list ]; then
    echo "File_list is executable"
fi
