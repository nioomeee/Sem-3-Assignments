# Write a shell script to create menu driven for the following task

# a. display trobule shooting detail of network

# b. kill the process

# c. view all mounts

# d. display full format listing

echo "Choose from the following: "
echo "1. display trobule shooting detail of network"
echo "2. kill the process"
echo "3. view all mounts"
echo "4. display full format listing"
read -p "Enter your desired choice: " choice

case $choice in 
1)ifconfig
;;
2)read -p "Enter the process id: " pid
kill "$pid"
;;
3)mount
;;
4)ls -l
;;
*)echo "Enter choice from the given choices"
;;
esac