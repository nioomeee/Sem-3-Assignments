# Write a shell script that compresses the multiple files in new folder ,keeping the original files at
# their place.

newfolder="compressedFiles"
mkdir -p "$newfolder"
dir="folder"

find "$dir" -type f | while read file; do
    gzip -c "$file" > "$newfolder/$(basename "$file").gz"
done

echo "All files compressed to $newfolder."