/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:22:09 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/15 20:28:11 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t size_dest;
	size_t counter;

	counter = 0;
	size_dest = ft_strlen(dst) ;	
	if (size_dest > dstsize + 1)
	{
		return (size_dest + dstsize);
	}

	while (counter < dstsize)
	{
		dst[size_dest + counter] = src[counter];
		counter++;
	}
	dst[size_dest + counter] = '\0';
	return (size_dest + 20);
}
