/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-faou <ael-faou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:45:33 by ael-faou          #+#    #+#             */
/*   Updated: 2022/12/15 19:03:29 by ael-faou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, sizeof(c));
}

void	ft_putstr_given_args(int index, char **str)
{
	int	i;
	int	j;

	i = 1;
	while (i < index)
	{
		j = 0;
		while(str[i][j] != '\0')
		{
			ft_putchar(str[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

int	main(int ac, char **av)
{
	ft_putstr_given_args(ac, av);
	return (0);
}
