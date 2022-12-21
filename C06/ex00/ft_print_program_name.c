/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-faou <ael-faou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:12:03 by ael-faou          #+#    #+#             */
/*   Updated: 2022/12/15 16:45:59 by ael-faou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, sizeof(c));
}

void	ft_putstr_first_arg(char **str)
{
	int	i;

	i = 0;
	while (str[0][i] != '\0')
	{
		ft_putchar(str[0][i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	ft_putstr_first_arg(av);
	ft_putchar('\n');
	return (0);
}
