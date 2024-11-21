# Write a shell script to create menu driven for the following task -
# ping a network
# 1. retrieve dns name servers
# 2. check the mount version
# 3. display all the running jobs
# 4. display process not assosciated with terminal 

while true; do
    echo "Menu: "
    echo "1. ping a network"
    echo "2. retrieve dns name servers"
    echo "3. check the mount version"
    echo "4. display all the running jobs"
    echo "5. display process not assosciated with terminal"
    echo "6. exit"
    read -p "Enter your choice: " choice

    case $choice in
    1) ping -c 4 google.com
    ;;
    2)dig www.google.com
    ;;
    3)mount --version
    ;;
    4)ps -r
    ;;
    5)ps -e | grep "?"
    ;;
    6)echo "exiting.."
    break;
    ;;
    *)echo "Invalid choice"
    ;;
    esac
done
