/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:43:18 by jryu              #+#    #+#             */
/*   Updated: 2022/02/15 15:29:00 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(char **str1, char **str2)
{
	char	*tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}

void	putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	is1;
	int	is2;

	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	is1 = *(unsigned char *)s1;
	is2 = *(unsigned char *)s2;
	return (is1 - is2);
}

void	sort_ascci(char *arr[], int Max)
{
	int	i;
	int	j;

	i = 1;
	while (i < Max)
	{
		j = i + 1;
		while (j < Max)
		{
			if (ft_strcmp(arr[i], arr[j]) > 0)
				swap(&arr[i], &arr[j]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc > 2)
		sort_ascci(argv, argc);
	i = 1;
	while (i < argc)
	{
		putstr(argv[i++]);
		putstr("\n");
	}
}
