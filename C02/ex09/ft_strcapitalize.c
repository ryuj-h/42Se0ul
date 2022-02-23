/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:05:37 by jryu              #+#    #+#             */
/*   Updated: 2022/02/09 17:01:25 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

bool	ft_IsSpaceElse(char c)
{
	bool	result;

	result = true;
	if (c >= '0' && c <= '9')
		result = false;
	if (c >= 'A' && c <= 'Z')
		result = false;
	if (c >= 'a' && c <= 'z')
		result = false;
	return (result);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	bool	nextChange;

	i = 0;
	nextChange = true;
	while (str[i] != '\0')
	{
		if (nextChange && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 0x20;
		}
		if (!nextChange && str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 0x20;
		}
		if (ft_IsSpaceElse(str[i]))
			nextChange = true;
		else
			nextChange = false;
		i++;
	}
	return (str);
}
