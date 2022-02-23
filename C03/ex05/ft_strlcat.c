/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jryu <jryu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:32:01 by jryu              #+#    #+#             */
/*   Updated: 2022/02/12 17:32:53 by jryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	return ((unsigned int)i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*dstend;
	char			*srccpy;
	unsigned int	dst_length;
	unsigned int	n;

	dstend = dest;
	srccpy = src;
	n = size;
	while (n-- > 0 && *dstend != '\0')
		dstend++;
	dst_length = (unsigned int)(dstend - dest);
	n = size - dst_length;
	if (n == 0)
		return (dst_length + ft_strlen(src));
	while (*src != '\0')
	{
		if (n > 1)
		{
			*dstend++ = *src;
			n--;
		}
		src++;
	}
	*dstend = '\0';
	return (dst_length + (src - srccpy));
}
