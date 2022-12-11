/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-faou <ael-faou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:49:06 by ael-faou          #+#    #+#             */
/*   Updated: 2022/12/10 20:51:28 by ael-faou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_sen(void)
{
	write(1, "Hello World!\n", sizeof("Hello World!\n"));
}

int	main(void)
{
	ft_print_sen();
	return (0);
}
