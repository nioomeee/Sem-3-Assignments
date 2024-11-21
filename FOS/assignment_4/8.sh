# Write a shell script that compresses the folder files separetely
for file in folder/*; do
    gzip "$file"
done

echo "Files compressed succesfully"