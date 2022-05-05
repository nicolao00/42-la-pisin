/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:39:14 by jaehypar          #+#    #+#             */
/*   Updated: 2022/04/19 18:00:48 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putint(int *arr, int size)
{
	char	a;
	int		len;
	int		end;

	len = 0;
	end = size;
	while (len < size)
	{
		a = arr[len++] + '0';
		write(1, &a, 1);
	}
	while (len--)
	{
		if (arr[size - 1 - len] == 9 - len)
			end--;
		else
			end++;
	}
	if (end)
		write(1, ", ", 2);
}

void	dfs(int *arr, int n, int arridx, int min)
{
	if (n == arridx)
		putint(arr, n);
	while (min <= 9)
	{
		arr[arridx] = min;
		dfs(arr, n, arridx + 1, ++min);
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];

	if (n > 0 && n < 10)
		dfs(arr, n, 0, 0);
}
