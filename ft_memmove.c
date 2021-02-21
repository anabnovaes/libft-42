/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:21:40 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/21 12:20:01 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*org;
	unsigned char	*dest;

	if ((src == NULL && dst == NULL) || len == 0)
		return ((void *)dst);
	if (src < dst)
	{
		org = (unsigned char *)src;
		dest = (unsigned char *)dst;
		while (len)
		{
			dest[len - 1] = org[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
