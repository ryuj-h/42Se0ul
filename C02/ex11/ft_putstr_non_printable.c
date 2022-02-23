/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:51:34 by jryu              #+#    #+#             */
/*   Updated: 2022/02/09 19:37:10 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

bool	ft_Isprintable(char c)
{
	return (c >= ' ' && c <= '~');
}

void	ft_print_16x(unsigned char c)
{
	int	ten;
	int	one;

	ten = c / 0x10;
	one = c % 0x10;
	write(1, &"\\", 1);
	write(1, &"0123456789abcdef"[ten], 1);
	write(1, &"0123456789abcdef"[one], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_Isprintable(str[i]))
			write(1, &str[i], 1);
		else
			ft_print_16x((unsigned char)str[i]);
		i++;
	}
}
