# Write a shell script that will compress current directory and also all subdirectories, keeping the
#  original files at their place.

output_zip="archives.zip"

zip -r "$output_zip" ./*

echo "Everything compressed to $output_zip."