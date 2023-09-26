/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-lim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 02:28:46 by rode-lim          #+#    #+#             */
/*   Updated: 2023/06/03 02:46:38 by rode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *str1, char const *str2, size_t size)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	while (str2[i] != '\0')
		i++;
	if (size != 0)
	{
		while (str2[l] != '\0' && l < size - 1)
		{
			str1[l] = str2[l];
			l++;
		}
		str1[l] = '\0';
	}
	return (i);
}
