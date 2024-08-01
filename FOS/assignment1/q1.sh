# . Write a shell script to execute following commands-
# • How would u display the hidden files?
# • How delete directory with files?
# • Explain two functionality of “mv” command with example?

# 1. to display block special files
ls -a

# 2. to delete directory  with files
rm -rf directory_name

# 3. Explain two functionality of “mv” command with example?
    # 1. moving a file/directory from 1 location to another 
    # moving a filr name example.txt from current directory into a directory named backup
        mv example.txt backup/
    # 2. Renaming a file/directory
        mv oldname.txtnewname.txt