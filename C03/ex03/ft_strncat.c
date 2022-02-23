/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:17:21 by jryu              #+#    #+#             */
/*   Updated: 2022/02/12 16:37:09 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*destcpy;

	destcpy = dest;
	while (*destcpy != '\0')
		destcpy++;
	while (*src != '\0' && nb > 0)
	{
		*destcpy = *src;
		destcpy++;
		src++;
		nb--;
	}
	*destcpy = '\0';
	return (dest);
}
