# Write a shell script to find volume of cube. (side*side*side).
read -p "\nEnter the side: " side

echo "\nThe volume of cube with side $side = $((side*side*side))"

#  Write a shell script to accept the temp in Celsius and convert it into Fahrenheit(c=F-32/1.8)
read -p "\nEnter the temperature in celcius: " cel

echo "\n $cel in farenheit = $(((cel+32).(1.8)))