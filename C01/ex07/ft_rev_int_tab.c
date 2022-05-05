/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:55:24 by jaehypar          #+#    #+#             */
/*   Updated: 2022/04/18 18:06:03 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	idx;
	int	arridx;

	arridx = size - 1;
	idx = 0;
	while (idx < size / 2)
	{
		temp = tab[idx];
		tab[idx] = tab[arridx - idx];
		tab[arridx - idx] = temp;
		idx++;
	}
}
