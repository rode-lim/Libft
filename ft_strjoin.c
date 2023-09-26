/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-lim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:53:27 by rode-lim          #+#    #+#             */
/*   Updated: 2023/06/05 18:58:57 by rode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoined;

	strjoined = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!strjoined)
		return (NULL);
	ft_strlcpy(strjoined, s1, (ft_strlen(s1) + 1));
	ft_strlcat(strjoined, s2, ((ft_strlen(s2) + ft_strlen(s1)) + 1));
	return (strjoined);
}
