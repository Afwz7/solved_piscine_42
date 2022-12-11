/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-faou <ael-faou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 21:07:03 by ael-faou          #+#    #+#             */
/*   Updated: 2022/12/10 21:28:51 by ael-faou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int	i;
	int	swap;
	int	i_rev;

	i = 0;
	i_rev = ft_strlen(str) - 1;
	while (str[i] != '\0')
	{
		if (i < i_rev)
		{
			swap = str[i];
			str[i] = str[i_rev];
			str[i_rev] = swap;
		}
		i_rev--;
		i++;
	}
	return (str);
}
