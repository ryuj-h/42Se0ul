/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:09:15 by jryu              #+#    #+#             */
/*   Updated: 2022/02/13 12:26:57 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	is_space(char c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}

bool	is_pOrm(char c)
{
	return ((c == '-') || (c == '+'));
}

bool	is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	result;
	int	minus;

	result = 0;
	minus = 1;
	while (is_space(*str))
		str++;
	while (is_pOrm(*str))
	{
		if (*str == '-')
			minus = minus * -1;
		str++;
	}
	while (is_number(*str))
	{
		result = result * 10 + *str - 0x30;
		str++;
	}
	return (result * minus);
}
