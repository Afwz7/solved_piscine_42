#!/bin/bash
#
#this is the interface
#
clear
echo -e "\t\tPIN AUTH SCRIPT\"FFS\" created by AHMED EL FAOUZ\nthis only a demo please report bugs to \" IG : definitely_not_4hmed \" if you found any...!"
echo "type anything to start"
read 
#
#set pin and authentificate.
#
#
ft_pin()
{
read -sp 'please choose a 4 digits pin : ' pin
echo -e "\n"
read -sp 'confirm your pin : ' confirmation
echo -e "\n"
length=${#pin}
if [ $length -ne 4 ]
then
	echo "enter a 4 digits pin please!"
	ft_pin
elif [[ "$pin" != "$confirmation" ]]
then
	echo -e "please enter identical pins!!"
	ft_pin
fi
if [[ "$pin" == "$confirmation" ]]
then
	echo -ne "\t\tsaving"
	i=0
	while [ $i -lt 3 ]
	do
		sleep 1
		echo -n "."
		let "i++"
	done
	echo -e "\ndone\n"
	yes_or_no()
	{
		read -p 'enter "yes" to authentificate or "no" to exit! : ' auth
		if [[ "$auth" == "no" ]]
		then
			echo -e "\t\t\tBYE (>_<) !"
		fi
		if [[ "$auth" == "yes" ]]
		then
			x=1
			ft_auth()
			{
				read -sp 'enter your pin : ' ty
				if [ "$ty" = "$pin" ]
				then
					echo -e "\n\t\tWELCOME!"
				fi
				if [ "$ty" != "$pin" ]
				then
					echo "you entered a mistaken pin please try again"
					((x++))
				fi
				if [ $x -ge 4 ]
				then
					echo -e "\nsession blocked ! contact your admin for more info."
				fi
				if [ $x -lt 4 ] && [[ "$pin" != "$ty" ]]
				then
					ft_auth
				fi
			}
			ft_auth
		fi
		if [[ "$auth" != "yes" ]] && [[ "$auth" != "no" ]]
		then
			echo "please enter yes or no!"
			yes_or_no
		fi
	}
	yes_or_no
fi
}
ft_pin
#
#
#end if script!
