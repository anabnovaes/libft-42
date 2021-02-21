/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 12:27:06 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/21 13:00:11 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	counter;
	char			*org;
	
	counter = 0;
	org = (char *)s;
	if(len == 0 || !(dest = malloc(len + 1)))
		return (NULL);
	while(counter < (unsigned int)len)
	{
		dest[counter] = org[counter + start];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
