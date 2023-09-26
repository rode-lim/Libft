/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-lim <rode-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:22:00 by rode-lim          #+#    #+#             */
/*   Updated: 2023/06/04 03:51:16 by rode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	converter;
	int	signvalue;

	i = 0;
	converter = 0;
	signvalue = 1;
	if (str[i] != '\0')
	{
		while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				signvalue = signvalue * -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			converter = converter * 10 + str[i] - '0';
			i++;
		}
	}
	return (converter * signvalue);
}

/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_atoi("  -123sognrso23e243"));
}*/
