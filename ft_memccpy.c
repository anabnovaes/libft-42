/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:20:49 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/19 23:01:37 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	cnt;
	char	*cnrv_dst;
	char	*cnrv_src;

	cnrv_dst = (char *)dst;
	cnrv_src = (char *)src;
	cnt = 0;
	while (cnt < n)
	{
		cnrv_dst[cnt] = cnrv_src[cnt];
		if ((unsigned char)cnrv_src[cnt] == (unsigned char)c)
		{
			return (dst + cnt + 1);
		}
		cnt++;
	}
	return (NULL);
}
