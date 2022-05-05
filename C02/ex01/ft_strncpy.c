/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:27:04 by jaehypar          #+#    #+#             */
/*   Updated: 2022/05/02 15:41:10 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	idx;

	idx = 0;
	while (idx < n)
	{
		if (src[idx] == '\0')
		{
			while (idx < n)
				dest[idx++] = '\0';
		}
		else
		{
			dest[idx] = src[idx];
			idx++;
		}
	}
	return (dest);
}
