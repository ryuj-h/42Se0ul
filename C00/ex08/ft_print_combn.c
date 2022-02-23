/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:21:06 by jryu              #+#    #+#             */
/*   Updated: 2022/02/10 14:25:50 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_num[10];

void	ft_track_number(char prev, int cur_depth, int depth)
{
	char	cur;

	if (cur_depth == depth)
	{
		write(1, g_num, depth);
		if (g_num[0] != 10 - depth + '0')
			write(1, ", ", 2);
		return ;
	}
	cur = prev + 1;
	while (cur <= '9')
	{
		g_num[cur_depth] = cur;
		ft_track_number(cur, cur_depth + 1, depth);
		cur++;
	}
}

void	ft_print_combn(int n)
{
	char	cur;

	cur = '0';
	g_num[n] = '\0';
	while (cur <= '9')
	{
		g_num[0] = cur;
		ft_track_number(cur, 1, n);
		cur++;
	}
}
