# Accept a file and check if the lines n that file are greater than 10 print “Enough Lines” else print 
# “More lines to enter”

read -p "Enter file name: " file

linecount=$(wc -l < "$file")
[ "$linecount" -gt 10 ] && echo "Enough lines" || echo "More lines to enter"