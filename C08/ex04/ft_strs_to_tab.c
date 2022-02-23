/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:51:09 by jryu              #+#    #+#             */
/*   Updated: 2022/02/21 14:21:51 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*str_dup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(str_len(src) * sizeof(char) + 1);
	if (!dest)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*s_ptr;
	int					i;

	i = 0;
	s_ptr = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!s_ptr)
		return (0);
	while (i < ac)
	{
		s_ptr[i].size = str_len(av[i]);
		s_ptr[i].copy = str_dup(av[i]);
		s_ptr[i].str = av[i];
		i++;
	}
	s_ptr[i].size = 0;
	s_ptr[i].copy = 0;
	s_ptr[i].str = 0;
	return (s_ptr);
}
