/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-faou <ael-faou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:52:53 by ael-faou          #+#    #+#             */
/*   Updated: 2022/12/12 22:05:45 by ael-faou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
		result *= nb * ft_recursive_factorial(nb - 1);
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}
