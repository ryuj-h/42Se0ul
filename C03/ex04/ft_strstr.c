/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:18:40 by jryu              #+#    #+#             */
/*   Updated: 2022/02/12 16:37:08 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

char	*ft_strstr(char *str, char *to_find)
{
	char			*Str;
	char			*strtofind;
	unsigned int	distance;

	if (*to_find == '\0')
		return (str);
	Str = str;
	strtofind = to_find;
	while (true)
	{
		if (*strtofind == '\0')
		{
			distance = strtofind - to_find;
			return ((char *)(Str - distance));
		}
		if (*Str == *strtofind)
			strtofind++;
		else
			strtofind = to_find;
		if (*Str == '\0')
			break ;
		Str++;
	}
	return (0);
}
