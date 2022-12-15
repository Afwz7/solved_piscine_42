/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-faou <ael-faou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 22:21:06 by ael-faou          #+#    #+#             */
/*   Updated: 2022/12/14 10:23:52 by ael-faou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = nb;
	while (nb > 0 && i < power)
	{
		result *= nb;
		i++;
	}
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}
