/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:31:42 by jryu              #+#    #+#             */
/*   Updated: 2022/02/16 11:41:56 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial2(int result, int n)
{
	result = result * n--;
	if (n > 0)
		return (ft_recursive_factorial2(result, n));
	return (result);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	return (ft_recursive_factorial2(1, nb));
}
