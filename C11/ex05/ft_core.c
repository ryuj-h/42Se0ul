/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_core.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:30:46 by jryu              #+#    #+#             */
/*   Updated: 2022/02/22 21:03:56 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myheader.h"

int	ft_isvalide_op(int num2, char c)
{
	int	ret;

	ret = 1;
	if (c == '/' && num2 == 0)
	{
		ft_put_str("Stop : division by zero\n");
		ret = 0;
	}
	else if (c == '%' && num2 == 0)
	{	
		ft_put_str("Stop : modulo by zero\n");
		ret = 0;
	}
	else
		ret = 1;
	return (ret);
}

int	ft_solve(int num1, int num2, char op)
{
	int	result;
	int	op_num;	
	int	(*g_functions[5])(int, int);

	g_functions[0] = &plus;
	g_functions[1] = &minus;
	g_functions[2] = &multi;
	g_functions[3] = &div;
	g_functions[4] = &remain;
	result = 0;
	if (op == '+')
		op_num = 0;
	else if (op == '-')
		op_num = 1;
	else if (op == '*')
		op_num = 2;
	else if (op == '/')
		op_num = 3;
	else if (op == '%')
		op_num = 4;
	else
		op_num = 999;
	if (op_num < 5)
		result = (g_functions[op_num])(num1, num2);
	return (result);
}
