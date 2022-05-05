/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 22:28:16 by jaehypar          #+#    #+#             */
/*   Updated: 2022/04/25 18:22:29 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_change(char *str, char *base, int i, int num)
{
	int	stop;
	int	result;
	int	baseidx;

	result = 0;
	stop = 0;
	while (str[i] != '\0' && stop != 1)
	{
		baseidx = 0;
		while (base[baseidx] != '\0')
		{
			if (str[i] == base[baseidx])
			{
				result *= num;
				result += baseidx;
				break ;
			}
			else if (baseidx == num - 1)
				stop = 1;
			baseidx++;
		}
		i++;
	}
	return (result);
}

int	ft_atoi(char *str, char *base, int num)
{
	int	i;
	int	plus;
	int	result;

	plus = 1;
	i = 0;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			plus *= -1;
		i++;
	}
	result = ft_change(str, base, i, num);
	return (result * plus);
}

int	ft_atoi_base(char *str, char *base)
{
	int	num;
	int	idx;
	int	print;

	num = 0;
	print = 1;
	while (base[num])
	{
		idx = 0;
		while (idx < num)
		{
			if (base[num] == base[idx])
				print = 0;
			idx++;
		}
		if (base[num] == '-' || base[num] == '+')
			print = 0;
		if ((base[num] >= 9 && base[num] <= 13) || base[num] == 32)
			print = 0;
		num++;
	}
	if (num > 1 && print != 0)
		return (ft_atoi(str, base, num));
	else
		return (0);
}
