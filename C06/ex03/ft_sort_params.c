/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 21:40:09 by jaehypar          #+#    #+#             */
/*   Updated: 2022/05/01 22:40:37 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_arr(int ac, char *av[])
{
	int	i;
	int	arridx;

	arridx = 1;
	while (arridx < ac)
	{
		i = 0;
		while (av[arridx][i])
			write(1, &av[arridx][i++], 1);
		write(1, "\n", 1);
		arridx++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int ac, char *av[])
{
	int		i;
	int		j;
	char	*temp;

	if (ac == 1)
		return (-1);
	i = 1;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j < ac)
		{
			if (0 < ft_strcmp(av[i], av[j]))
			{
				temp = av[j];
				av[j] = av[i];
				av[i] = temp;
			}
			j++;
		}
		i++;
	}
	print_arr(ac, av);
}
