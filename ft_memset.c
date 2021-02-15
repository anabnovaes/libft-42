/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:18:52 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/14 14:21:00 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			counter;
	unsigned char	*value;

	value = b;
	counter = 0;
	while (value[counter] != '\0' && counter < len)
	{
		value[counter] = (unsigned char)c;
		counter++;
	}
	return(b);
}
