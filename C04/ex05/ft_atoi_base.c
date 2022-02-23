/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:53:49 by jryu              #+#    #+#             */
/*   Updated: 2022/02/13 21:26:52 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

bool	is_vaild_str(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str == NULL || ft_strlen(str) <= 1)
		return (false);
	while (str[i])
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '
			|| (str[i] == '-') || (str[i] == '+'))
			return (false);
		i++;
	}
	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (j < ft_strlen(str))
			if (str[i] == str[j++])
				return (false);
		i++;
	}
	return (true);
}

int	get_index_by_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	jinsu;
	int	result;
	int	minus;
	int	matchnum;

	result = 0;
	minus = 1;
	if (!is_vaild_str(base))
		return (result);
	jinsu = ft_strlen(base);
	while (((*str >= 9 && *str <= 13) || *str == ' '))
		str++;
	while ((*str == '-') || (*str == '+'))
	{
		if (*str++ == '-')
			minus = minus * -1;
	}
	while (true)
	{
		matchnum = get_index_by_base(*str++, base);
		if (matchnum == -1)
			break ;
		result = result * jinsu + matchnum;
	}
	return (result * minus);
}
