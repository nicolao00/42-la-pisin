/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:58:32 by jaehypar          #+#    #+#             */
/*   Updated: 2022/05/04 13:59:18 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	arridx;

	arridx = 0;
	size = max - min;
	if (size <= 0)
		return (0);
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (0);
	while (min < max)
		arr[arridx++] = min++;
	return (arr);
}

/*
#include <stdio.h>
int main()
{
	int *arr = ft_range(-3, -1);
	for(int i=0;i<3;i++)
		printf("%d", arr[i]);
}
*/
