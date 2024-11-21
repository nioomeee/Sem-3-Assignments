# 1. Write a shell script that uncompresses the multiple files in new folder ,keeping the original files 
# at their place.

newfolder="uncompressedfiles"
mkdir -p "$newfolder"
dir="compressedFiles"

find "$dir" -type f | while read file; do
    gunzip -c "$file" > "$newfolder/$(basename "$file" .gz)"
done

echo "Uncompressed files to $newfolder ."
