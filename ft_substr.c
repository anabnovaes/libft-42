/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 12:27:06 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/28 10:53:54 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	counter;
	char			*org;
	size_t			len_s;

	counter = 0;
	org = ((char *)s);
	if (s == NULL)
		return (NULL);
	len_s = ft_strlen((char *)s);
	if (start > len_s || len == 0)
		return (ft_strdup(""));
	if (!(dest = malloc(len + 1)))
		return (dest);
	while (counter < (unsigned int)len && s[counter + start])
	{
		dest[counter] = org[counter + start];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
