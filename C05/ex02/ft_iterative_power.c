/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:07:30 by jaehypar          #+#    #+#             */
/*   Updated: 2022/04/25 18:32:23 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (--power)
		result *= nb;
	return (result);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_iterative_power(2, 5));
	printf("%d\n", ft_iterative_power(2, 0));
	printf("%d\n\n", ft_iterative_power(2, -1));
	printf("%d\n", ft_iterative_power(-2, 5));
	printf("%d\n", ft_iterative_power(-2, 0));
	printf("%d\n", ft_iterative_power(-2,-1));
}
*/
