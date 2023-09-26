/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-lim <rode-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 22:54:00 by rode-lim          #+#    #+#             */
/*   Updated: 2023/06/05 01:42:52 by rode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>

void	ft_putstr_fd(char *c, int fd)
{
	int	i;

	i = 0;
	if (fd < 0)
		return ;
	while (c[i] != '\0')
	{
		write(fd, &c[i], 1);
		i++;
	}
}

/*int	main()
{
	char	*l;

	l = "lol";
	ft_putstr_fd(l, 1);
}*/
