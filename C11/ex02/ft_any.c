/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 22:28:03 by jaehypar          #+#    #+#             */
/*   Updated: 2022/05/05 16:36:45 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}
/*
int check_num(char *arr)
{
	while (*arr)
	{
		if ('0' <= *arr && *arr <= '9')
			return (0);
		arr++;
	}
	return (1);
}
#include <stdio.h>
int main()
{
	printf("\n----------------------ex02----------------------------\n");
		char *arr[7];
		arr[0] = "012345";
		arr[1] = "03a25";
		arr[2] = "aaa";
		arr[3] = "678";
		arr[4] = "0";
		arr[5] = 0;
		for(int i = 0; i < 5; i++)
			printf("arr[%d] ::::%s\n",i,arr[i]);
		printf("\n\nresult:::: %d\n",ft_any(arr, check_num));
}
*/
