/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:15:48 by jaehypar          #+#    #+#             */
/*   Updated: 2022/04/23 16:17:25 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		idx;
	char	start;

	start = '0';
	idx = 0;
	while (idx <= 9)
	{
		write(1, &start, 1);
		start += 1;
		idx++;
	}
}
