/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:27:08 by jryu              #+#    #+#             */
/*   Updated: 2022/02/13 21:07:49 by jryu             ###   ########.fr       */
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

bool	is_pOrm(char c)
{
	return ((c == '-') || (c == '+'));
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
		if ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' '
			|| is_pOrm(str[i]))
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

void	ft_putnbr_res(int nbr, char *base, int jinsu)
{
	if (nbr == -2147483648)
	{
		ft_putnbr_res(nbr / jinsu, base, jinsu);
		write(1, &(base[-(nbr % jinsu)]), 1);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr_res(-nbr, base, jinsu);
	}
	else
	{
		if (nbr > jinsu - 1)
			ft_putnbr_res(nbr / jinsu, base, jinsu);
		write(1, &base[nbr % jinsu], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	jinsu;

	if (!is_vaild_str(base))
		return ;
	jinsu = ft_strlen(base);
	ft_putnbr_res(nbr, base, jinsu);
}
