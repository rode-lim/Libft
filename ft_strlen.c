/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-lim <rode-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 23:36:05 by rode-lim          #+#    #+#             */
/*   Updated: 2023/04/13 23:36:06 by rode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *e)
{
	size_t	counter;

	counter = 0;
	while (e[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
