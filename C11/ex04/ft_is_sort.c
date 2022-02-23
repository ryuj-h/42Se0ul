/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:39:33 by jryu              #+#    #+#             */
/*   Updated: 2022/02/22 21:06:31 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_revese_check(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	done;

	i = 0;
	done = 1;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
		{
			done = 0;
			break ;
		}
		i++;
	}
	return (done);
}

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;	
	int	done;

	i = 0;
	done = 1;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
		{
			done = 0;
			break ;
		}
		i++;
	}
	if (!done)
		done = ft_revese_check(tab, length, f);
	return (done);
}
