/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:09:57 by jryu              #+#    #+#             */
/*   Updated: 2022/02/12 16:37:10 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*destcmp;

	destcmp = dest;
	while (*destcmp != '\0')
		destcmp++;
	while (*src != '\0')
	{
		*destcmp = *src;
		destcmp++;
		src++;
	}
	*destcmp = '\0';
	return (dest);
}
