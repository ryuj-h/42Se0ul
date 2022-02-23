/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:34:35 by jryu              #+#    #+#             */
/*   Updated: 2022/02/22 20:59:35 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	result;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		result = (*f)(tab[i]);
		if (result != 0)
			count++;
		i++;
	}
	return (count);
}
