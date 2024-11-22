# Write a shell script to display message good morning / good afternoon / good evening/ good
# night according to the time.
current=$(date +%H)

if [ $current -ge 5 ] && [ $current -le 12 ]; then
    echo "Good morning"
elif [ $current -gt 12 ] && [ $current -le 17 ]; then
    echo "Good afterooon"
elif [ $current -gt 17 ] && [ $current -le 21 ]; then 
    echo "Good evening"
else
    echo "Good night"
fi