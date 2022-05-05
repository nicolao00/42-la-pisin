/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 01:35:46 by jaehypar          #+#    #+#             */
/*   Updated: 2022/05/04 14:14:07 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*p;
	int	i;

	i = 0;
	if (max - min > 2147483647)
		return (-1);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	p = (int *)malloc(sizeof(int) * (max - min));
	if (p == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
		p[i++] = min++;
	*range = p;
	return (i);
}
/*
#include <stdio.h>
int main()
{
	int *arr;
	printf("%d\n", ft_ultimate_range(&arr, 1, 3));
	for(int i=0; i<4;i++)
		printf("%d ", arr[i]);
}
*/
