/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-faou <ael-faou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:22:06 by ael-faou          #+#    #+#             */
/*   Updated: 2022/12/14 18:59:20 by ael-faou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_is_prime(int nb)
{
	int	prime;

	prime = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (nb % prime != 0)
	{
		prime++;
	}
	if (nb != prime)
	{
		return (0);
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	while (ft_is_prime(nb + i) == 0)
	{
		i++;
	}
	return (nb + i);
}
