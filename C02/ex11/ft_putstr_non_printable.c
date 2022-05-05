/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:00:36 by jaehypar          #+#    #+#             */
/*   Updated: 2022/05/02 15:56:00 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(int i)
{
	write(1, "\\", 1);
	write(1, &"0123456789abcdef"[i / 16], 1);
	write(1, &"0123456789abcdef"[i % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	n;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 0)
		{
			n = str[i] + 256;
			print_hex(n);
		}
		else if ((str[i] >= 0 && str[i] <= 31) || str[i] >= 127)
		{
			print_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
