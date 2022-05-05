/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 20:49:24 by jaehypar          #+#    #+#             */
/*   Updated: 2022/04/25 11:16:49 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	desidx;
	unsigned int	srcidx;

	srcidx = 0;
	desidx = 0;
	while (dest[desidx])
		desidx++;
	while (src[srcidx] && srcidx < nb)
	{
		dest[desidx + srcidx] = src[srcidx];
		srcidx++;
	}
	dest[desidx + srcidx] = '\0';
	return (dest);
}
