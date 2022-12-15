/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-faou <ael-faou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 22:21:06 by ael-faou          #+#    #+#             */
/*   Updated: 2022/12/12 22:49:08 by ael-faou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (nb > 0 && power > 1)
	{
		result = nb * ft_recursive_power(nb, (power - 1));
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
