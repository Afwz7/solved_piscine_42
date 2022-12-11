/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-faou <ael-faou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:41:24 by ael-faou          #+#    #+#             */
/*   Updated: 2022/12/10 20:45:23 by ael-faou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_countdown(void)
{
	int	a;

	a = '9';
	while (a >= '0')
	{
		ft_putchar(a);
		a--;
	}
}

int	main(void)
{
	ft_countdown();
	return(0);
}
