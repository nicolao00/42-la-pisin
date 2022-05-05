/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 19:32:02 by jaehypar          #+#    #+#             */
/*   Updated: 2022/05/01 16:11:11 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
		idx++;
	return (idx);
}

int	check_base(char *base)
{
	int	idx;
	int	exidx;

	if (ft_strlen(base) <= 1)
		return (0);
	idx = 0;
	while (base[idx])
	{
		exidx = 0;
		if (base[idx] == '-' || base[idx] == '+')
			return (0);
		while (exidx < idx)
		{
			if (base[exidx] == base[idx])
				return (0);
			exidx++;
		}
		idx++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (!check_base(base))
		return ;
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr_base(2147483648 / len, base);
		ft_putnbr_base(2147483648 % len, base);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr < len)
	{
		write(1, &base[nbr], 1);
		return ;
	}
	ft_putnbr_base(nbr / len, base);
	ft_putnbr_base(nbr % len, base);
}
/*
int main()
{
	ft_putnbr_base(-2147483648, "0123456789");
}
*/
