/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:22:27 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/28 11:56:26 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t length;

	length = ft_strlen((char *)s);
	while (length > 0)
	{
		if (s[length] == c)
			return ((char *)s + length);
		length--;
	}
	if (s[length] == c)
		return ((char *)s + length);
	return (NULL);
}
