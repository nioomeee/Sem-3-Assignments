#  Check the current working directory and who is the user then make a directory and a file in it 
# named as “Demo.sh”. Change its permission to make it executable and then rename that file with 
# “New_file.sh”

# checking the current working directory
pwd

# who is the user
whoami

# creating a directory
mkdir directory
cd directory

# creating a file
touch Demo.sh

# Changing it's permission to make it executable
chmod +x Demo.sh

# Renaming the file
mv Demo.sh New_file.sh
