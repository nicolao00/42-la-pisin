/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:11:15 by jaehypar          #+#    #+#             */
/*   Updated: 2022/04/18 13:11:17 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	start;
	int		idx;

	start = 'a';
	idx = 0;
	while (idx < 26)
	{
		write(1, &start, 1);
		start += 1;
		idx++;
	}
}
