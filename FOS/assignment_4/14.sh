# Write a shell script that will perform following commands:

#  • Create a tar file that hold multiple folder in it. 
tar_file="archive.tar"

folders="compressedFiles uncompressedfiles"

echo "Creating tar file $tar_file..."

tar -cvf "$tar_file" $folders

# • Execute(extract) the tar file that is created.
echo "Extracting contents of $tar_file..."
mkdir -p "extracted_files"

tar -xvf "$tar_file" -C "extracted_files"

echo "The contents of $tar_file extracted to 'extracted_files/' directory."

#  • Show the table of content or view the contents of the tar file.
echo "the contents of the file: "
tar -tvf "$tar_file"

echo "Task completed"
