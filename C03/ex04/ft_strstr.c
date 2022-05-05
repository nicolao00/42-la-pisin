/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 20:53:23 by jaehypar          #+#    #+#             */
/*   Updated: 2022/04/24 15:33:10 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	fidx;

	i = 0;
	if (!ft_strlen(to_find))
		return (str);
	while (str[i])
	{
		fidx = 0;
		while (str[i + fidx] == to_find[fidx] && str[i + fidx] != '\0')
		{
			if (to_find[fidx + 1] == '\0')
				return (&str[i]);
			fidx++;
		}
		i++;
	}
	return (0);
}
