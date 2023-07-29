echo "Enter a file name"
read fname

# check if filename is of lenght zero
if [ -z $fname ]
then 
    exit
fi


# store original input source
terminal=`tty`

# redirect input to $fname
exec < $fname


#counter
count=1

# read lines one by one

while read  line
do
    echo $count.$line
    count=`expr $count + 1`
    # count = `expr $count + 1` this will not work as there are spaces between 'count' and '=' 
done

exec < $terminal
