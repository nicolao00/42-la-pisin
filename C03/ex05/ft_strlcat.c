/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 10:34:38 by jaehypar          #+#    #+#             */
/*   Updated: 2022/04/24 15:44:08 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dlen;
	unsigned int	slen;

	dlen = 0;
	slen = 0;
	i = 0;
	while (dest[dlen])
		dlen++;
	while (src[slen])
		slen++;
	while (i + dlen + 1 < size && src[i])
	{
		dest[i + dlen] = src[i];
		i++;
	}
	dest[i + dlen] = '\0';
	if (size <= dlen)
		return (slen + size);
	else
		return (slen + dlen);
}
