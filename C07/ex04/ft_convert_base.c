/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:40:23 by jaehypar          #+#    #+#             */
/*   Updated: 2022/05/04 14:35:06 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		nbr_len(long long nbr, int base_len);
char	*ft_putnbr_base(long long nbr, char *base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	base_check(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	base_idx(char *str, char a)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == a)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	plus;
	int	result;
	int	len;

	i = 0;
	plus = 1;
	result = 0;
	len = ft_strlen(base);
	if (!base_check(base))
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			plus *= -1;
	}
	while (str[i] != '\0' && base_idx(base, str[i]) != -1)
	{
		result *= len;
		result += base_idx(base, str[i++]);
	}
	return (result * plus);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		changenum;
	char	*str;

	if (!base_check(base_from) || !base_check(base_to))
		return (0);
	changenum = ft_atoi_base(nbr, base_from);
	str = ft_putnbr_base(changenum, base_to);
	return (str);
}
