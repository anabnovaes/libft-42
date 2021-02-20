/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:21:36 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/19 23:03:13 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	counter;
	char	*cnrv_dst;
	char	*cnrv_src;

	cnrv_dst = (char *)dst;
	cnrv_src = (char *)src;
	counter = 0;
	while (counter < n)
	{
		cnrv_dst[counter] = cnrv_src[counter];
		counter++;
	}
	return (dst);
}
