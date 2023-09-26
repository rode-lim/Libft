/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-lim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 23:57:18 by rode-lim          #+#    #+#             */
/*   Updated: 2023/06/03 00:08:15 by rode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *ch, size_t n)
{
	size_t	l;
	size_t	k;

	l = 0;
	k = 0;
	if (ch[0] == '\0')
		return ((char *)str);
	while (str[l] != '\0' && l < n)
	{
		while (str[l + k] == ch[k] && l + k < n)
		{
			if (ch[k + 1] == '\0')
				return ((char *)str + l);
			k++;
		}
		k = 0;
		l++;
	}
	return (NULL);
}
