/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-faou <ael-faou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:20:40 by ael-faou          #+#    #+#             */
/*   Updated: 2022/12/14 11:55:41 by ael-faou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (sqrt * sqrt < nb)
	{
		sqrt++;
	}
	if (sqrt * sqrt == nb)
	{
		return (sqrt);
	}
	return (0);
}
