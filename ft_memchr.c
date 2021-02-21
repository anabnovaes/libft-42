/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:20:53 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/21 11:33:29 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*search;
	size_t			counter;

	search = (unsigned char *)s;
	counter = 0;
	while (counter < n)
	{
		if (search[counter] == (unsigned char)c)
		{
			return ((void *)search + counter);
		}
		counter++;
	}
	return (NULL);
}
