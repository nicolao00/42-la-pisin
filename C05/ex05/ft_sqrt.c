/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:50:16 by jaehypar          #+#    #+#             */
/*   Updated: 2022/05/03 15:28:06 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	result;

	result = 0;
	if (nb < 0)
		return (0);
	while (result <= nb)
	{
		if (result * result == nb)
			return (result);
		else if (result * result > nb)
			break ;
		result++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_sqrt(2147483647));
}
*/
