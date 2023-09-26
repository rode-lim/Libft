/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-lim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 21:13:24 by rode-lim          #+#    #+#             */
/*   Updated: 2023/06/03 21:45:09 by rode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elements, size_t bytes)
{
	void	*ptr;

	ptr = malloc(elements * bytes);
	if (ptr == NULL)
		return (NULL);
	else
		ft_bzero(ptr, (elements * bytes));
	return (ptr);
}
