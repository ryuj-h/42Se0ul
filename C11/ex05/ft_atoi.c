/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:59:50 by jryu              #+#    #+#             */
/*   Updated: 2022/02/22 19:48:58 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myheader.h"

int	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_is_whitespace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_atoi(char *str)
{
	long long	result;
	int			minus;

	minus = 1;
	while (ft_is_whitespace(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	result = 0;
	while (ft_is_number(*str))
	{
		result *= 10;
		result += (*str) - '0';
		str++;
	}
	return ((int)(result * minus));
}
