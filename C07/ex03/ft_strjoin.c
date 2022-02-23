/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:12:21 by jryu              #+#    #+#             */
/*   Updated: 2022/02/20 15:23:24 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	destlen;

	i = 0;
	destlen = ft_strlen(dest);
	while (src[i])
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = 0;
	return (dest);
}

int	full_string_size(int size, char **strs, char *sep)
{
	int	i;
	int	result;
	int	sepsize;

	result = 0;
	i = 0;
	sepsize = ft_strlen(sep);
	if (size == 0)
		return (0);
	while (i < size)
	{
		result = result + ft_strlen(strs[i]);
		if (i != size - 1)
			result = result + sepsize;
		i++;
	}
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;

	i = 0;
	result = malloc(full_string_size(size, strs, sep));
	if (!result)
		return ((char *)0);
	result[0] = '\0';
	if (size == 0)
		return (result);
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i != size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return ((char *)result);
}
