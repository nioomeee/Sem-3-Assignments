# Write a shell script to create menu driven for the following task
# a. display dynamic real time view of running system
# b. display full format list of processes
# c. display your hostname on terminal
# d. display routing table

while true; do
    echo "Menu: "
    echo "1. display dynamic real time view of running system"
    echo "2. display full format list of processes"
    echo "3. display your hostname on terminal"
    echo "4. display routing table"
    echo "5. exit"
    read -p "Enter your choice: " choice

    case $choice in
    1)top
    ;;
    2)ps -f
    ;;
    3)hostname
    ;;
    4)route
    ;;
    5)echo "Exiting"
    break 
    ;;
    *)echo "Invalid choice"
    ;;
    esac
done
