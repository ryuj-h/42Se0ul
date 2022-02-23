/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:08:41 by jryu              #+#    #+#             */
/*   Updated: 2022/02/22 20:21:37 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myheader.h"

char	ft_find_operator(char *str)
{
	if (str[0] == '\0' || str[1] != '\0')
		return (-1);
	return (str[0]);
}

int	main(int argc, char *argv[])
{
	int		num1;
	int		num2;
	char	op;
	int		result;

	if (argc == 4)
	{
		num1 = ft_atoi(argv[1]);
		num2 = ft_atoi(argv[3]);
		op = ft_find_operator(argv[2]);
		if (ft_isvalide_op(num2, op) == 1)
		{
			result = ft_solve(num1, num2, op);
			ft_put_number(result);
			write(1, "\n", 1);
		}
	}
}
