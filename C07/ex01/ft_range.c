/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:54:06 by jryu              #+#    #+#             */
/*   Updated: 2022/02/20 15:10:48 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*ret;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	ret = malloc(4 * size);
	if (!ret)
		return (0);
	i = 0;
	while (i < size)
	{
		ret[i] = min + i;
		i++;
	}
	return (ret);
}
