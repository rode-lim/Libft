/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-lim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 17:19:54 by rode-lim          #+#    #+#             */
/*   Updated: 2023/06/03 17:43:49 by rode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *source, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	dlen = i;
	slen = ft_strlen(source);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (source[j] != '\0' && j < size - dlen - 1)
	{
		dest[i] = source[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dlen + slen);
}
