/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_afctorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-faou <ael-faou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:55:01 by ael-faou          #+#    #+#             */
/*   Updated: 2022/12/12 21:01:06 by ael-faou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
		if (nb == 0)
		{
			nb++;
			break ;
		}
	}
	if (nb <= 0)
	{
		return (0);
	}
	return (result);
}
