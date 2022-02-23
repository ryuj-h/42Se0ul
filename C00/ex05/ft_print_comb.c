/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:59:57 by jryu              #+#    #+#             */
/*   Updated: 2022/02/03 20:30:56 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_print_threenum(char	one, char	two, char	three, bool	end)
{
	char	comma;
	char	spacebar;

	comma = ',';
	spacebar = ' ';
	write(1, &one, 1);
	write(1, &two, 1);
	write(1, &three, 1);
	if (!end)
	{
		write(1, &comma, 1);
		write(1, &spacebar, 1);
	}
}

void	ft_print_comb(void)
{
	bool	end;
	char	one;
	char	two;
	char	three;

	one = '0';
	while (one <= '7')
	{
		two = one + 1;
		while (two <= '8')
		{
			three = two + 1;
			while (three <= '9')
			{
				end = (one == '7' && two == '8' && three == '9');
				ft_print_threenum(one, two, three, end);
				three++;
			}
			two++;
		}
		one++;
	}
}
