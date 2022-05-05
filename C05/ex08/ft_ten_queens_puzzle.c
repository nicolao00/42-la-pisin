/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:25:34 by jaehypar          #+#    #+#             */
/*   Updated: 2022/05/03 15:13:15 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_matrix(int check[][10], int *total)
{
	int	x;
	int	y;
	int	output;

	y = 0;
	while (y <= 9)
	{
		x = 0;
		while (x <= 9)
		{
			output = x + 48;
			if (check[y][x] == 1)
				write(1, &output, 1);
			x++;
		}
		y++;
	}
	*(total) = *(total) + 1;
	write(1, "\n", 1);
}

void	set_matrix(int matrix[][10], int x, int y, int set)
{
	int	ny;
	int	minusx;
	int	plusx;

	ny = y + 1;
	plusx = x + 1;
	minusx = x - 1;
	while (ny <= 9)
	{
		if (plusx <= 9)
			matrix[ny][plusx++] += set;
		if (minusx >= 0)
			matrix[ny][minusx--] += set;
		matrix[ny][x] += set;
		ny++;
	}
}

void	dfs(int matrix[][10], int check[][10], int *total, int y)
{
	int	x;

	x = 0;
	if (y == 10)
	{
		print_matrix(check, total);
		return ;
	}
	while (x <= 9)
	{
		if (matrix[y][x] == 0)
		{
			check[y][x] = 1;
			matrix[y][x] = 1;
			set_matrix(matrix, x, y, 1);
			dfs(matrix, check, total, y + 1);
			check[y][x] = 0;
			matrix[y][x] = 0;
			set_matrix(matrix, x, y, -1);
		}
		x++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	matrix[10][10];
	int	check[10][10];
	int	total;
	int	x;
	int	y;

	total = 0;
	y = 0;
	while (y < 10)
	{
		x = 0;
		while (x < 10)
		{
			matrix[y][x] = 0;
			check[y][x++] = 0;
		}
		y++;
	}
	dfs(matrix, check, &total, 0);
	return (total);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_ten_queens_puzzle());
}
*/
