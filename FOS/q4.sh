# Write a shell script to display message good morning / good afternoon / good evening/ good
# night according to the time.

current=$(date +"%H")

if [ $current -ge 5 ] && [ $current -lt 12 ]; then
    echo "Good morning"
elif [ $current -ge 12 ] && [ $current -lt 17 ]; then
    echo "Good afternoon"
elif [ $current -ge 17 ] && [ $current -lt 21 ]; then
    echo "Good evening"
else
    echo "Good night"
fi
