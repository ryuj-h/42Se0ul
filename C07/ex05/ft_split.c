/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:36:31 by jryu              #+#    #+#             */
/*   Updated: 2022/02/19 21:32:31 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>

bool	is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (true);
		charset++;
	}
	return (false);
}

int	str_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (*str && !is_charset(*str, charset))
	{
		str++;
		i++;
	}
	return (i);
}

int	get_word_num(char *str, char *charset)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (*str && is_charset(*str, charset))
			str++;
		while (*str && !is_charset(*str, charset))
			str++;
		if (*str)
			i++;
	}
	return (i);
}

char	*make_word(char *str, char *charset)
{
	int		_strlen;
	char	*newword;
	int		i;

	_strlen = str_len(str, charset);
	newword = malloc((_strlen + 1) * sizeof(char));
	i = 0;
	while (i < _strlen)
	{
		newword[i] = str[i];
		i++;
	}
	newword[i] = '\0';
	return (newword);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**strs;
	bool	added;

	added = false;
	strs = malloc((get_word_num(str, charset) + 1) * sizeof(char *));
	i = 0;
	while (*str)
	{
		added = false;
		while (*str && is_charset(*str, charset))
			str++;
		while (*str && !is_charset(*str, charset))
		{
			if (!added)
			{
				strs[i] = make_word(str, charset);
				added = true;
				i++;
			}
			str++;
		}
	}
	strs[i] = 0;
	return (strs);
}
