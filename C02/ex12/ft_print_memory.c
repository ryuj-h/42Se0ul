/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:19:56 by jryu              #+#    #+#             */
/*   Updated: 2022/02/08 21:38:17 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_16x_number_2(unsigned long long number)
{
	if (number >= 0x10)
		ft_print_16x_number_2(number / 0x10);
	write(1, &"0123456789abcdef"[number % 0x10], 1);
}

void	ft_print_16x_number(unsigned long long number)
{
	int					charcount;
	unsigned long long	savenumber;
	int					j;

	charcount = 1;
	savenumber = number;
	j = 0;
	while (savenumber >= 0x10)
	{
		charcount++;
		savenumber = savenumber / 0x10;
	}
	while (j < 0x10 - charcount)
	{
		write(1, "0", 1);
		j++;
	}
	ft_print_16x_number_2(number);
}

void	ft_ex_putchar(char c)
{
	if (c >= ' ' && c < 127)
		write(1, &c, 1);
	else
		write(1, &".", 1);
}

void	ft_print_memory_2(void *start, void *curr, int size)
{
	int				i;
	unsigned char	nb;

	i = 0;
	while (i < 16)
	{
		if (start + size <= (void *)(curr + i))
			write(1, &"  ", 2);
		else
		{
			nb = *(unsigned char *)(curr + i);
			write(1, &"0123456789abcdef"[nb / 0x10], 1);
			write(1, &"0123456789abcdef"[nb % 0x10], 1);
		}
		if (i % 2 == 1)
			write(1, &" ", 1);
		i++;
	}
	i = 0;
	while (i < 16)
	{
		if (start + size > (void *)(curr + i))
			ft_ex_putchar(*(char *)(curr + i));
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned long long	ulladdr;
	char				*curr_addr;

	curr_addr = (char *)addr;
	while ((void *)curr_addr < (addr + size))
	{
		ulladdr = (unsigned long long)curr_addr;
		ft_print_16x_number(ulladdr);
		write(1, &": ", 2);
		ft_print_memory_2(addr, curr_addr, size);
		write(1, &"\n", 1);
		curr_addr += 16;
	}
	return (addr);
}
