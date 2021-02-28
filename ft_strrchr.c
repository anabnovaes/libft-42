/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:22:27 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/28 12:04:12 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	length;
	char	*value;

	length = ft_strlen((char *)s);
	value = (char *)s; 
	while (length > 0)
	{
		if (value[length] == (unsigned char)c)
			return (value + length);
		length--;
	}
	if (s[length] == c)
		return ((char *)s + length);
	return (NULL);
}
