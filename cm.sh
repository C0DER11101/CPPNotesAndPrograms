# compile c++ files

if [ -e $1 ]
then
	if [ -f $1 ]
	then
		while read p
		do
			if [ $p == "math.h" ] # if the .cpp file has math.h header file!!
			then
				g++ $1 -o $2 -lm
				break;
			else
				g++ $1 -o $2
				break;
			fi
		done < $1
	else
		echo "$1 is not a file!"

	fi

else
	echo "$1 doesnot exist!"
fi
