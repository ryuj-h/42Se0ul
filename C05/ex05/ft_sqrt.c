/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:55:03 by jryu              #+#    #+#             */
/*   Updated: 2022/02/16 11:50:01 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	bruteforce;

	if (nb <= 0)
		return (0);
	if (nb <= 1)
		return (nb);
	bruteforce = 1;
	while (bruteforce * bruteforce <= (long)nb)
	{
		if (bruteforce * bruteforce == (long)nb)
			return (bruteforce);
		bruteforce++;
	}
	return (0);
}
