/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conunt_if.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 23:21:26 by jaehypar          #+#    #+#             */
/*   Updated: 2022/05/04 23:31:26 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (i < length)
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
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
	char *arr[7];
		arr[0] = "012345";
		arr[1] = "0325";
		arr[2] = "123";
		arr[3] = "678";
		arr[4] = "cccc";
		arr[5] = "aaaa";
		for(int i = 0; i < 6; i++)
			printf("arr[%d] ::::%s\n",i,arr[i]);
		printf("\n\nresult:::: %d\n",ft_count_if(arr, 6, check_num));
}
*/
