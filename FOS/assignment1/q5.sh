# . Write a shell script to execute following commands
# • Create a file called text and store name,age and address in it.
# • Display the contents of the file text on the screen.
# • Display version of operating system.

# 1. Create a file called text and store name,age and address in it.
    echo "Name: John Doe" > text.txt
    echo "Age: 35" >> text.txt
    echo "Address: 123 Wall Street, USA" >> text.txt

# 2. Display the contents of the file text on the screen.

    echo "Contents of the file: "
    cat text.txt

# 3. Version of operating system

    echo "Version of Operating system: "
    uname -a