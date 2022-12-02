/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-faou <ael-faou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:24:54 by ael-faou          #+#    #+#             */
/*   Updated: 2022/12/01 20:42:09 by ael-faou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	inext;

	i = 0;
	while (i < size)
	{
		inext = i + 1;
		while (inext < size - 1)
		{
			if (tab[inext] < tab[i])
			{
				tmp = tab[i];
				tab[i] = tab[inext];
				tab[inext] = tmp;
			}
			inext++;
		}
		i++;
	}
}
