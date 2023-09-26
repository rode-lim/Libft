/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-lim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 19:19:14 by rode-lim          #+#    #+#             */
/*   Updated: 2023/06/05 19:41:55 by rode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include "ft_strchr.c"
#include "ft_strlen.c"
#include "ft_substr.c"
#include "ft_strdup.c"*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (s1 == NULL)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len - 1]))
		len--;
	return (ft_substr(s1, 0, len));
}

/*int main()
{
    char const *s1 = "aaahelloaaa";
    char const *set = "a";
    char *trimmed = ft_strtrim(s1, set);

    printf("Original: '%s'\n", s1);
    printf("Trimmed: '%s'\n", trimmed);

    return 0;
}*/
