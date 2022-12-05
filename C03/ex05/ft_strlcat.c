/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-faou <ael-faou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:23:08 by ael-faou          #+#    #+#             */
/*   Updated: 2022/12/05 15:57:33 by ael-faou         ###   ########.fr       */
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

char	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;
	int	source_length;
	int	destination_length;

	i = 0;
	j = 0;
	source_length = ft_strlen(src);
	destination_length = ft_strlen(dest);
	if (size == 0 || size <= destination_length)
	{
		return (source_length + size);
	}
	while (src [i] != '\0' && i < size - destination_length - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (destinationlength + sourcelength);
}
