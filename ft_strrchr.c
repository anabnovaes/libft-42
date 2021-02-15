/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:22:27 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/15 20:28:54 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *character;
	size_t length;
	
	character = (char *)s;
	length = ft_strlen((char *)character);
	while (length != 0)
	{
		if (character[length] == (char *)c)
		{
			return *(s + length);
		}
		length--;
	}
	return(NULL);
}
