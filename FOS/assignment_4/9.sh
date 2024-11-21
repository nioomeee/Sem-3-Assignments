# Write a shell script that uncompresses the folder files separetely

for file in folder/*; do
    gunzip "$file"
done

echo "Files in the folder uncompressed successfully"