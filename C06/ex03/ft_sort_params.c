/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-faou <ael-faou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:27:44 by ael-faou          #+#    #+#             */
/*   Updated: 2022/12/21 09:49:55 by ael-faou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(char **a1, char **a2)
{
	char	*swap;

	swap = *a1;
	*a1 = *a2;
	*a2 = swap;
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str1[i] == str2[j]
			&& (str2[i] != '\0' && str2[i] != '\0'))
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_sort_params(int index, char **stack)
{
	int	j;
	int	cntr;

	cntr = 1;
	while (cntr < index - 1)
	{
		j = 1;
		while (j < index - 1)
		{
			if (ft_strcmp(stack[j], stack[j + 1]) > 0)
			{
				ft_swap(&stack[j], &stack[j + 1]);
			}
			j++;
		}
		cntr++;
	}
	j = 1;
	while (j < index)
	{
		ft_putstr(stack[j]);
		ft_putchar('\n');
		j++;
	}
}

int	main(int ac, char **av)
{
	ft_sort_params(ac, av);
	return (0);
}
