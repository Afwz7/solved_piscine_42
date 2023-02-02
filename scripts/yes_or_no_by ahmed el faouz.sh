#!/bin/bash
#
#this is the interface !
#
clear
echo -e "\t\tYES OR NO GUESSING SCRIPT \"YNS\" created by AHMED EL FAOUZ\n"
read -p 'press enter to start !! ' pl
echo ""
#
#Randomize the answer and print it in the standard output.
#
read -p 'type in a yes or no question : ' yon
luck=$(( $RANDOM % 2 ))
#
#
if [[ "$yon" != "$empty" ]]
then
echo -n "calculating please wait ."
counter=0
while [ $counter -lt 4 ]
do
	sleep 1 && echo -n "."
	let "counter++"
done
ft_yon()
{
	case $luck in
		0)
			echo -e "\n\t the answer to the question $yon is : YES !"
			;;
		1)
			echo -e "\n\t the answer to the question $yon is : NO !"
			;;
	esac
}
ft_yon
elif [[ "$yon" == "$empty" ]]
then
	echo -e "\n\t\t no question entered ! reluanch the YNS please!"
	exit 1
fi
#
#
#end of script .
