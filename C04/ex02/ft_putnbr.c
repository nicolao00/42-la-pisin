/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:54:30 by jaehypar          #+#    #+#             */
/*   Updated: 2022/04/24 16:14:19 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putint(int len, int val)
{
	int		idx;
	int		ten;
	char	result;

	while (len)
	{
		ten = 1;
		idx = len--;
		while (--idx)
			ten *= 10;
		result = val / ten + 48;
		val %= ten;
		write(1, &result, 1);
	}
}

void	getlen(int val)
{
	int	temp;
	int	len;

	temp = val;
	len = 1;
	while (temp / 10)
	{
		len++;
		temp /= 10;
	}
	putint(len, val);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -1 * nb;
	}
	getlen(nb);
}
