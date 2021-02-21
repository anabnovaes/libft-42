/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:21:40 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/21 11:50:15 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*temp[ft_strlen((char *)src)];
	
	if(len == 0 || src == NULL)
		return (NULL);
	ft_memcpy(temp, src, len + 1);
	ft_memcpy(dst, temp, len);
	return (dst);
}
