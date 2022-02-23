/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:34:08 by jryu              #+#    #+#             */
/*   Updated: 2022/02/12 11:16:18 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_print_tennum(int number)
{
	int	ten;
	int	one;

	ten = number / 10;
	one = number % 10;
	ft_putchar(0x30 + ten);
	ft_putchar(0x30 + one);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 99)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_print_tennum(num1);
			ft_putchar(' ');
			ft_print_tennum(num2);
			if (!(num1 == 98 && num2 == 99))
				write(1, &", ", 2);
			num2++;
		}
		num1 ++;
	}
}
