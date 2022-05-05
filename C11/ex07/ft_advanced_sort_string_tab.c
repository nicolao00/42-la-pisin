/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:36:13 by jaehypar          #+#    #+#             */
/*   Updated: 2022/05/05 16:20:59 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		len;
	char	*temp;

	i = 0;
	len = 0;
	while (tab[len])
		len++;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - 1 - i)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}

int main()
{
	char *ex07_strs[7];
	ex07_strs[0] = "abcde";
	ex07_strs[1] = "abcd";
	ex07_strs[2] = "abcdef";
	ex07_strs[3] = "abc";
	ex07_strs[4] = "abcdefg";
	ex07_strs[5] = "a";
	ex07_strs[6] = 0;
	printf("\nBefore sort\n\n");
	for(int i=0;i<6;i++)
		printf("%s\n",ex07_strs[i]);
	ft_advanced_sort_string_tab(ex07_strs, &ft_strcmp);
	printf("\nAfter sort\n\n");
	for(int i=0;i<6;i++)
		printf("%s\n",ex07_strs[i]);
}
*/
