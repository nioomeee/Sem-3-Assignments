#  Write a shell script to find all the background and forground processes

# foreground processes
ps -e

# background processes
sleep 30s &
jobs -l