/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:20:57 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/21 11:03:45 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			counter;

	counter = 0;
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (counter < n)
	{
		if (c1[counter] != c2[counter])
		{
			return ((int)c1[counter] - (int)c2[counter]);
		}
		counter++;
	}
	return (0);
}
