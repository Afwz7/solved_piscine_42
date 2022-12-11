/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-faou <ael-faou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 21:59:49 by ael-faou          #+#    #+#             */
/*   Updated: 2022/12/10 22:20:16 by ael-faou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_maff_alpha(void)
{
	int	a;
	int	b;
	int	i;

	a = 122;
	b = 90;
	i = 1;
	while (a >= 97 && b >= 65)
	{
		if (i % 2 == 1)
		{
			ft_putchar(a);
		}
		else
		{
			ft_putchar(b);
		}
		a--;
		b--;
		i++;
	}
}

int	main(void)
{
	ft_maff_alpha();
	return (0);
}
