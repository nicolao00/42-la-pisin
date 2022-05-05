/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 21:18:17 by jaehypar          #+#    #+#             */
/*   Updated: 2022/05/04 14:19:41 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	desidx;
	int	srcidx;

	srcidx = 0;
	desidx = 0;
	while (dest[desidx])
		desidx++;
	while (src[srcidx])
	{
		dest[desidx + srcidx] = src[srcidx];
		srcidx++;
	}
	dest[desidx + srcidx] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	total_len(int size, char **strs, char *sep)
{
	int	stridx;
	int	len;
	int	sepsize;

	len = 0;
	stridx = 0;
	if (size <= 1)
		sepsize = 0;
	else
		sepsize = size - 1;
	while (stridx < size)
		len += ft_strlen(strs[stridx++]);
	len += sepsize * ft_strlen(sep);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		stridx;
	char	*arr;

	stridx = 0;
	len = total_len(size, strs, sep);
	arr = (char *)malloc(sizeof(char) * (len + 1));
	*arr = '\0';
	if (!arr)
		return (0);
	while (stridx < size)
	{
		arr = ft_strcat(arr, strs[stridx]);
		if (stridx + 1 < size)
			arr = ft_strcat(arr, sep);
		stridx++;
	}
	arr[len] = '\0';
	return (arr);
}

/*
#include <stdio.h>
int main()
{
	char *ex03_arr1;
	char *ex03_str[5];
	ex03_str[0] = "hello";
	ex03_str[1] = "a";
	ex03_str[2] = "b";
	ex03_str[3] = "c";
	ex03_str[4] = "d";
	ex03_arr1 = ft_strjoin(5, ex03_str, "");
	printf("%s\n", ex03_arr1);
    free(ex03_arr1);
}
*/
