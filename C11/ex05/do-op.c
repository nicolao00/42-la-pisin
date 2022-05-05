/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:21:34 by jaehypar          #+#    #+#             */
/*   Updated: 2022/05/05 21:24:38 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_sum(int a, int b);
int		ft_sub(int a, int b);
int		ft_mul(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);
void	ft_putnbr(int nb);
int		ft_strcmp(char *s1, char *s2);

int	ft_atoi(char *str)
{
	int	i;
	int	plus;
	int	result;

	plus = 1;
	i = 0;
	result = 0;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			plus *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * plus);
}

void	ft_operate(int (*f)(int, int), char *a, char *b, int idx)
{
	int	n1;
	int	n2;

	n1 = ft_atoi(a);
	n2 = ft_atoi(b);
	if (idx == 3 && n2 == 0)
	{
		write(1, "Stop : division by zero", 23);
		return ;
	}
	if (idx == 4 && n2 == 0)
	{
		write(1, "Stop : modulo by zero", 21);
		return ;
	}
	ft_putnbr(f(n1, n2));
}

int	check_op(char *a)
{
	if (ft_strcmp(a, "+") == 0)
		return (0);
	if (ft_strcmp(a, "-") == 0)
		return (1);
	if (ft_strcmp(a, "*") == 0)
		return (2);
	if (ft_strcmp(a, "/") == 0)
		return (3);
	if (ft_strcmp(a, "%") == 0)
		return (4);
	return (-1);
}

int	main(int ac, char *av[])
{
	int	(*f[5])(int, int);
	int	result;
	int	idx;

	f[0] = ft_sum;
	f[1] = ft_sub;
	f[2] = ft_mul;
	f[3] = ft_div;
	f[4] = ft_mod;
	result = 0;
	if (ac == 4)
	{
		idx = check_op(av[2]);
		if (idx == -1)
		{
			write(1, "0\n", 2);
			return (-1);
		}
		ft_operate(f[idx], av[1], av[3], idx);
		write(1, "\n", 1);
	}
	return (0);
}
