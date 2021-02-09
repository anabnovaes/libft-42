/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:22:13 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/06 19:46:48 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int size;

	size = 0;
	while (size < len && src[size] != '\0')
	{
		dst[size] = src[size];
		size++;
	}
	while (size < len)
	{
		dst[size] = '\0';
		size++;
	}
	return (dst);
}