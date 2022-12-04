/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-faou <ael-faou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:51:37 by ael-faou          #+#    #+#             */
/*   Updated: 2022/12/03 20:18:31 by ael-faou         ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;
	unsigned int	last;

	i = 0;
	length = ft_strlen(src);
	last = size - 1;
	while (src[i] != '\0' && i < last)
	{
		dest[i] = src[i];
		i++;
	}
	while (src[i] == '\0' && i < last)
	{
		dest[i] = '\0';
	}
	return (length);
}
