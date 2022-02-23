/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:33:03 by jryu              #+#    #+#             */
/*   Updated: 2022/02/20 15:16:00 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

int		ft_strlen(char *str);
bool	is_vaild_str(char *str);
int		get_index_by_base(char c, char *base);
int		ft_atoi_base(char *str, char *base);

static char	g_nummarr[100];

void	ft_reverse_chararr(char *str, int size)
{
	int		i;
	char	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = tmp;
		i++;
	}
}

char	*ft_strdup(char *src)
{
	char	*ret;
	int		i;

	i = 0;
	ret = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	while (src[i])
	{
		ret[i] = src[i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}

char	*MakeZeroStr(char	*base_to)
{
	char	*ret;

	ret = malloc (2 * sizeof(char));
	ret[0] = base_to[0];
	ret[1] = '\0';
	return (ret);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int			i;
	int			minus;
	int			jinsu;
	char		*retptr;
	long long	lnbr;

	lnbr = nbr;
	jinsu = ft_strlen(base);
	if (lnbr < 0)
	{
		minus = -1;
		lnbr = lnbr * -1;
	}
	i = 0;
	while (lnbr)
	{
		g_nummarr[i++] = base[lnbr % jinsu];
		lnbr = lnbr / jinsu;
	}
	if (minus == -1)
		g_nummarr[i++] = '-';
	g_nummarr[i] = '\0';
	ft_reverse_chararr(g_nummarr, i);
	retptr = ft_strdup(g_nummarr);
	return (retptr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		int_value;
	char	*result;

	if (!is_vaild_str(base_from) || !is_vaild_str(base_to))
		return (0);
	int_value = ft_atoi_base(nbr, base_from);
	if (int_value == 0)
	{
		result = MakeZeroStr(base_to);
		return (result);
	}
	result = ft_itoa_base(int_value, base_to);
	return (result);
}
