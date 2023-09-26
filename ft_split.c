/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-lim <rode-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:37:07 by rode-lim          #+#    #+#             */
/*   Updated: 2023/06/06 14:57:36 by rode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	splitcount(const char *check, char c)
{
	int	bo;
	int	k;
	int	l;

	bo = 0;
	k = 0;
	l = 0;
	while (check && check[k] != '\0')
	{
		if (bo == 0 && check[k] != c)
		{
			bo = 1;
			l++;
		}
		else if (check[k] == c)
			bo = 0;
		k++;
	}
	return (l);
}

static char	*swdup(const char *string, int start, int end)
{
	char	*fword;
	int		i;

	i = 0;
	fword = malloc((end - start + 1) * sizeof(char));
	while (start < end)
		fword[i++] = string[start++];
	fword[i] = '\0';
	return (fword);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	size_t	i;
	int		o;
	size_t	p;

	o = -1;
	i = 0;
	p = 0;
	splitted = malloc((splitcount(s, c) + 1) * sizeof(char *));
	if (!splitted || !s)
		return (0);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && o < 0)
			o = i;
		else if ((s[i] == c || i == ft_strlen(s)) && o >= 0)
		{
			splitted[p++] = swdup(s, o, i);
			o = -1;
		}
		i++;
	}
	splitted[p] = 0;
	return (splitted);
}
