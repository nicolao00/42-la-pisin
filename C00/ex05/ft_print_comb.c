/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:28:55 by jaehypar          #+#    #+#             */
/*   Updated: 2022/04/18 14:22:51 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(int hun, int ten, int one)
{
	hun += 48;
	ten += 48;
	one += 48;
	write(1, &hun, 1);
	write(1, &ten, 1);
	write(1, &one, 1);
	if (!(hun == '7' && ten == '8' && one == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	hun;
	int	ten;
	int	one;

	hun = 0;
	ten = 0;
	one = 0;
	while (hun <= 7)
	{
		ten = hun + 1;
		while (ten <= 8)
		{
			one = ten + 1;
			while (one <= 9)
				putchar(hun, ten, one++);
			ten++;
		}
		hun++;
	}
}
