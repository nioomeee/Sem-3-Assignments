#  Accept a file and check if the words in that file are greater than 20 print “Enough Words” else 
# print “More words to enter”

read -p "Enter the file name: " file

wordcount=$(wc -w < "$file")

if [ "$wordcount" -gt 20 ]; then
echo "Enough words"
else 
echo "Not enough words"
fi 

