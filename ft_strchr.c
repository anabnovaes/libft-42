/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:21:58 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/14 20:30:21 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char value_check;
	value_check = (char)c;
	while (*s)
	{
		if (*s == value_check)
		{
			return ((char *)s);
		}
		s++;
	}
	if(*s == value_check)
	{
		return ((char *)s);
	}
	return (NULL);
}
