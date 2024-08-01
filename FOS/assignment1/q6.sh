# Write a shell script to display the following menu and acts accordingly:

# i. Calendar of the current month and year.
    cal
    
# ii. terminal type
    echo "Terminal type: $TERM"

# iii. User name, Users home directory.
    echo "User Name: $USER"
    echo "Home directory: $HOME"

# iv. current month
    month=$(date +"%B")
    echo "Current month: $month"

# v. Machine name.
    echo "Machine Name: $(uname -n)"

