/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:21:58 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/18 20:45:07 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		if (s[counter] == c)
		{
			return ((char *)s + counter);
		}
		counter++;
	}
	if (s[counter] == c)
	{
		return ((char *)s + counter);
	}
	return (NULL);
}
