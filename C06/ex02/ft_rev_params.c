/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-faou <ael-faou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:06:30 by ael-faou          #+#    #+#             */
/*   Updated: 2022/12/15 19:21:11 by ael-faou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_rev_args(int index, char **str)
{
	int	i;
	int	j;
	int	exclude_binary;

	i = index - 1;
	exclude_binary = 1;
	while (i < index && i >= exclude_binary)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			ft_putchar(str[i][j]);
			j++;
		}
		i--;
		ft_putchar('\n');
	}
}

int	main(int ac, char **av)
{
	ft_putstr_rev_args(ac, av);
	return (0);
}
