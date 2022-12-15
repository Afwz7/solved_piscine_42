/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-faou <ael-faou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:00:19 by ael-faou          #+#    #+#             */
/*   Updated: 2022/12/15 08:49:46 by ael-faou         ###   ########.fr       */
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
