/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:46:23 by jryu              #+#    #+#             */
/*   Updated: 2022/02/20 15:21:01 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	board;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	board = max - min;
	*range = malloc(4 * board);
	if (!*range)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < board)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (board);
}
