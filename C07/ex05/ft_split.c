/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 22:18:29 by jaehypar          #+#    #+#             */
/*   Updated: 2022/05/03 17:43:19 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_char(char c, char *charset)
{
	int	i;

	i = 0;
	if (c == '\0')
		return (0);
	while (charset[i])
	{
		if (c == charset[i])
			return (0);
		i++;
	}
	return (1);
}

int	wordnum(char *str, char *charset)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i])
	{
		if (is_char(str[i], charset))
		{
			num++;
			i++;
		}
		while (is_char(str[i], charset) && str[i])
			i++;
		while (!is_char(str[i], charset) && str[i])
			i++;
	}
	return (num);
}

char	*malloc_arr(char *str, int size)
{
	char	*arr;
	int		i;

	arr = (char *)malloc(sizeof(char) * (size + 1));
	if (!arr)
		return (0);
	i = 0;
	while (str[i] && i < size)
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = 0;
	return (arr);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	char	*temp;
	int		stringnum;
	int		i;

	stringnum = wordnum(str, charset);
	arr = (char **)malloc(sizeof(char *) * (stringnum + 1));
	if (!arr)
		return (0);
	i = 0;
	while (*str && i < stringnum)
	{
		temp = str;
		while (is_char(*str, charset))
			str++;
		arr[i++] = malloc_arr(temp, str - temp);
		while (!is_char(*str, charset))
			str++;
	}
	arr[i] = 0;
	return (arr);
}
/*
#include <stdio.h>
int main()
{
	char **ex05_split1;
	char *ex05_str1 = "h e l?lo\0my  name is?hunpark!";
	ex05_split1 = ft_split(ex05_str1, "? ");
	for (int j = 0; j < 5; j++)
	{
		printf("%s\n", ex05_split1[j]);
	}
    printf("\n\n");
    free(ex05_split1);
}
*/
