/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-faou <ael-faou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:07:59 by ael-faou          #+#    #+#             */
/*   Updated: 2022/12/01 19:22:56 by ael-faou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	i_rev;
	int	tmp;

	i = 0;
	i_rev = size - 1;
	while (tab[i] < tab[i_rev])
	{
		tmp = tab[i];
		tab[i] = tab[i_rev];
		tab[i_rev] = tmp;
		i++;
		i_rev--;
	}
}
