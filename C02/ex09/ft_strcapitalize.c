/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:43:58 by jaehypar          #+#    #+#             */
/*   Updated: 2022/05/02 15:43:05 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	change_big(char *str, int exidx)
{
	if ('a' <= str[exidx] && str[exidx] <= 'z')
		return (0);
	else if ('A' <= str[exidx] && str[exidx] <= 'Z')
		return (0);
	else if ('0' <= str[exidx] && str[exidx] <= '9')
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	idx;

	idx = 1;
	if ('a' <= str[0] && str[0] <= 'z')
		str[0] -= 32;
	while (str[idx] != '\0')
	{
		if (change_big(str, idx - 1))
		{
			if ('a' <= str[idx] && str[idx] <= 'z')
				str[idx] -= 32;
		}
		else if ('A' <= str[idx] && str[idx] <= 'Z')
			str[idx] += 32;
		idx++;
	}
	return (str);
}
