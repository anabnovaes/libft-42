/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:22:27 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/28 12:14:33 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*value;
	int		counter;

	counter = ft_strlen((char *)str);
	value = (char *)str;
	while (counter >= 0)
	{
		if (value[counter] == (unsigned char)c)
		{
			return (&value[counter]);
		}
		counter--;
	}
	return (NULL);
}
