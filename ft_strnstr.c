/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:22:24 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/24 19:57:17 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t c1;
	size_t c2;

	c1 = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (c1 < len && haystack[c1] != '\0')
	{
		c2 = 0;
		while ((haystack[c1 + c2] == needle[c2] && c1 + c2 < len) &&
		needle[c2])
			c2++;
		if (needle[c2] == '\0')
			return ((char *)haystack + c1);
		c1++;
	}
	return (NULL);
}
