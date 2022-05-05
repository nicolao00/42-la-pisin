/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 20:59:02 by jaehypar          #+#    #+#             */
/*   Updated: 2022/05/04 11:20:20 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_strcpy(char *des, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*str;
	int			len;
	int			i;

	str = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!str)
		return (0);
	i = 0;
	while (i < ac)
	{
		len = ft_strlen(av[i]);
		str[i].size = len;
		str[i].str = av[i];
		str[i].copy = (char *)malloc(sizeof(char) * (len + 1));
		if (!str[i].copy)
			return (0);
		ft_strcpy(str[i].copy, av[i]);
		i++;
	}
	str[i].str = 0;
	return (str);
}
