#!/bin/bash
#
# note : i dont use exit status trick cz i wanna practice conditionnals!
#
#this is the interface
#
clear
echo -e "\t\tFILES FINDER SCRIPT \"FFS\" created by AHMED EL FAOUZ\n"
read -p 'enter (0) to look for a file : ' look
if [ "$look" = "0" ]
then
	read -p 'enter the name of the file you are looking for : ' name
elif [ "$look" != "0" ]
then
	echo -e "\n\t\tinvalid choice\n\nEXITING ...\n"
fi
#
#search the file and print the path
#
check=$(find ~ -name $name -print)
if [ "$look" = "0" ] && [[ "$check" != "$empty" ]]
then
	echo -e "\"file found\" path : " $check "\n (NOTE : check log.txt -created in current directory by this script- for file path!)"
fi
if [[ "$check" == *"$name"* ]] && [ "$look" = "0" ] && [[ "$check" != "$empty" ]]
then
       	echo -e "\n\t\t\tSUCCES>_<\n\t\t\tEXITING...\n"
fi
if [ "$check" = "$empty" ] && [ "$look" = "0" ] && [ "$name" = "$empty" ]
then
	echo -e "no user input! .\nEXITING...\n"
fi
if [[ "$check" = "$empty" ]] && [ "$look" = "0" ] && [[ "$name" != "$empty" ]]
then
	echo -e "file not found! .\nEXITING...\n"
fi
#
#output path in log.txt
#
echo $check > log.txt
#
#end of "finder_script".
