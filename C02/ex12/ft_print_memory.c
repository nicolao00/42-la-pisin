/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehypar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:58:20 by jaehypar          #+#    #+#             */
/*   Updated: 2022/05/02 15:24:12 by jaehypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_addr(unsigned long long addr, unsigned int count)
{
	if (addr != 0)
	{
		print_addr(addr / 16, count + 1);
		write(1, &"0123456789abcdef"[addr % 16], 1);
	}
	else
	{
		while (count < 16)
		{
			write(1, "0", 1);
			count++;
		}
	}
}

void	print_hex(unsigned char *addr, unsigned int len)
{
	unsigned int	i;

	i = 0;
	write(1, ":", 1);
	while (i < len)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		write(1, &"0123456789abcdef"[(int)addr[i] / 16], 1);
		write(1, &"0123456789abcdef"[(int)addr[i] % 16], 1);
		i++;
	}
	while (i < 16)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		write(1, "  ", 2);
		i++;
	}
}

void	print_str(char *str, unsigned int len)
{
	unsigned int	i;

	i = 0;
	write(1, " ", 1);
	while (i < len)
	{
		if (*str <= 31 || *str >= 127)
			write(1, ".", 1);
		else
			write(1, str, 1);
		str++;
		i++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	bit;
	unsigned int	outputsize;

	bit = 0;
	while (size > 0)
	{
		if (size > 16)
			outputsize = 16;
		else
			outputsize = size;
		print_addr((unsigned long long)addr + bit, 0);
		print_hex((unsigned char *)addr + bit, outputsize);
		print_str((char *)addr + bit, outputsize);
		bit += 16;
		size -= outputsize;
	}
	return (addr);
}
/* int	main()
{
	char	str[92] = "Bonjour les aminches 
	/지우기/  c  est fou tout ce qu on peut faire avec   print_memory    lol lol";
	str[20] = 0x09;
 	str[21] = 0x0a;
 	str[22] = 0x09;
 	str[33] = 0x09;
 	str[38] = 0x09;
 	str[63] = 0x09;
 	str[64] = 0x0a;
 	str[65] = 0x09;
 	str[78] = 0x0a;
 	str[79] = 0x0a;
 	str[80] = 0x0a;
 	str[81] = 0x09;
	str[85] = 0x2e;
	str[89] = 0x0a;
	str[90] = 0x20;
	ft_print_memory(str, 92);
}
*/
