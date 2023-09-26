/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-lim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 20:22:13 by rode-lim          #+#    #+#             */
/*   Updated: 2023/06/03 20:44:50 by rode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	o;
	char	*s;

	o = 0;
	s = (char *)str;
	while (o < n)
	{
		if ((unsigned char)s[o] == (unsigned char)c)
			return ((char *)str + o);
		o++;
	}
	return (NULL);
}
