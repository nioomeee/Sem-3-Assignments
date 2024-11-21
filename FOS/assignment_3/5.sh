# Create a unix.txt. Content of the file is given below.
# unix is great os. unix is opensource. unix is free os.
# learn operating system.
# unix linux which one you choose.
# unix is easy to learn.unix is a multiuser os.Learn unix .unix is a powerful.
# Implement below queries on file
# Replace all the word from unix to linux
# Replace only 3rd occurance unix to linux
# Replace a string in 2 nd line only from Unix to Linux
# Delete a pertuculer line (5th )line from file
# Hint : Use sed command 

cat > unix.txt <<EOF
unix is great os. unix is opensource. unix is free os.
learn operating system. unix 
linux which one you choose.
unix is easy to learn.unix is a multiuser os.
Learn unix .unix is a powerful.
EOF

echo "Replace all the word from unix to linux: "
sed 's/unix/linux/g' unix.txt
echo

echo "Replace only 3rd occurance unix to linux: "
sed 's/unix/linus/3' unix.txt
echo

echo "Replace a string in 2 nd line only from Unix to Linux: "
sed '2s/unix/linux/g' unix.txt
echo

echo "Delete a particular line (5th) line from file"
sed '5d' unix.txt
echo

