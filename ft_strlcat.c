/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:22:09 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/28 11:46:33 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t size_dest;
	size_t counter;
	size_t size_org;

	counter = 0;
	size_dest = ft_strlen(dst);
	size_org = ft_strlen((char *)src);
	if (size_dest >= dstsize)
		return (dstsize + size_org);
	while (counter + size_dest < dstsize - 1 && src[counter])
	{
		dst[size_dest + counter] = src[counter];
		counter++;
	}
	dst[size_dest + counter] = '\0';
	return (size_dest + size_org);
}
