#  Perform the following commands to locate or search the files.
#  • Find files using name in the Current Directory
find . -name file1

#  • Find directories using name
find . -type d -name folder

# • Find C files and .txt using name
find . -type f -name "*.c"
find . -type f -name "*.txt"

#  • Find all files with paricular extension
find . -type f -name "*.sh"

#  • Find all files with starting with A-Z capital letters.
find . -type f -name "[A-Z]*"

#  • Find files with read ,write and execute permission.
find . -type f -perm 0777 -print

#  • Find files without read ,write and execute permission.
find . -type f ! -perm 0777 -print

#  • Find Read Only files
find . -perm /u=r -print

#  • Find Executable files
find . -perm /a=x -ptint

#  • Find Empty files
find /tmp -type f -empty 

#  • Find Empty directories
find /tmp -type -d -empty

#  • Find Read & Write Files
find . -perm /u=rw

#  • Find all Hidden Files.
find /tmp -type f -name ".*"
