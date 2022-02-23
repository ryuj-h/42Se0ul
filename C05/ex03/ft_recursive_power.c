/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:04:59 by jryu              #+#    #+#             */
/*   Updated: 2022/02/16 17:13:43 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power2(int result, int n, int nb)
{
	n--;
	if (n > 0)
		return (ft_recursive_power2(result * nb, n, nb));
	return (result);
}

int	ft_recursive_power(int nb, int power)
{
	int	result;
	int	i;

	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	i = 0;
	result = 1;
	result = ft_recursive_power2(result, power + 1, nb);
	return (result);
}
