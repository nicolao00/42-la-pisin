/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 21:27:23 by jaehypar          #+#    #+#             */
/*   Updated: 2022/05/04 21:39:58 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}
/*
#include <stdio.h>

int main()
{
	int a[] = {1,2,3,4,5};
	ft_foreach(a, 5, &ft_putnbr);
}
#include <unistd.h>
void ft_putnbr(int a)
{
	char c;
	c = a + '0';
	write(1, &c, 1);
}
*/
