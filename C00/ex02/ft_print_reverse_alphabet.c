/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:17:51 by jaehypar          #+#    #+#             */
/*   Updated: 2022/04/18 13:14:23 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		idx;
	char	start;

	start = 'z';
	idx = 0;
	while (idx < 26)
	{
		write(1, &start, 1);
		start -= 1;
		idx++;
	}
}
