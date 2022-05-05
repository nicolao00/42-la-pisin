/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 23:31:50 by jaehypar          #+#    #+#             */
/*   Updated: 2022/05/05 16:21:58 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	ascend;
	int	desend;

	i = 0;
	ascend = 0;
	desend = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			ascend++;
		else if (f(tab[i], tab[i + 1]) < 0)
			desend++;
		i++;
	}
	if (ascend != 0 && desend != 0)
		return (0);
	return (1);
}
/*
int	cmp(int a,int b)
{
	if (a < b)
		return (-1);
	else if (a > b)
		return (1);
	else
		return (0);
}

#include <stdio.h>
int main()
{
	int tab[100] = {1,4,5};//7
		for(int i = 0; i < 7; i++)
			printf("tab[%d] ::::%d\n",i,tab[i]);
		printf("\nresult::::%d" ,ft_is_sort(tab, 4, cmp));
}
*/
