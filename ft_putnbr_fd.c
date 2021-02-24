/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 17:52:09 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/23 21:59:29 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	char	*value;
	size_t	counter;

	value = ft_itoa(n);
	counter = 0;
	while (value[counter])
	{
		write(fd, &value[counter], 1);
		counter++;
	}
}
