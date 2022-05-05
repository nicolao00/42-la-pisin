/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 20:20:03 by jaehypar          #+#    #+#             */
/*   Updated: 2022/04/24 12:15:19 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
