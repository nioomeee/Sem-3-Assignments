# Create a file named “First_shell” using cat command. Check if this file is readable, writable and 
# executable or not. If it is not executable then make it executable and then list out all the files and see
#  if it became execuatble.

echo "Creating the file First_shell. Press Ctrl+D to save and continue."
cat > First_shell

if [ -r First_shell ]; then 
echo "The file has read access"
else 
echo "The file doesn't have read access"
fi

if [ -w First_shell ]; then 
echo "The file has write access"
else 
echo "The file doesn't have write access"
fi

if [ -x First_shell ]; then 
echo "The file has execute permission"
else 
echo "The file doesn't have execute permission. Making it executable"
chmod +x First_shell
fi