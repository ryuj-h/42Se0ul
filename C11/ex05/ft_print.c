/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:58:12 by jryu              #+#    #+#             */
/*   Updated: 2022/02/22 20:00:46 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myheader.h"

void	ft_put_str(char *str)
{	
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_put_number(int num)
{
	char	c;

	if (num == -2147483648)
	{
		ft_put_number(num / 10);
		write(1, "8", 1);
	}
	else if (num < 0)
	{
		write(1, "-", 1);
		ft_put_number(-num);
	}
	else
	{
		if (num > 9)
			ft_put_number(num / 10);
		c = '0' + num % 10;
		write(1, &c, 1);
	}
}
