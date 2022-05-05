/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:49:59 by jaehypar          #+#    #+#             */
/*   Updated: 2022/05/04 14:35:14 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

int	nbr_len(long long nbr, int base_len)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr > 0)
	{
		nbr /= base_len;
		len++;
	}
	return (len);
}

char	*ft_putnbr_base(long long n, char *base)
{
	int			len;
	char		*tmp;

	len = nbr_len(n, ft_strlen(base));
	tmp = (char *)malloc(sizeof(char) * (len + 1));
	if (!tmp)
		return (0);
	if (n == 0)
	{
		tmp[0] = base[0];
		tmp[1] = '\0';
		return (tmp);
	}
	if (n < 0)
	{
		tmp[0] = '-';
		n *= -1;
	}
	tmp[len] = '\0';
	while (n > 0)
	{
		tmp[--len] = base[n % ft_strlen(base)];
		n /= ft_strlen(base);
	}
	return (tmp);
}
