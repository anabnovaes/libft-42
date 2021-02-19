/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:18:52 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/18 20:48:15 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	counter;
	char	*final_value;

	counter = 0;
	final_value = (char *)b;
	while (counter < len)
	{
		final_value[counter] = (char)c;
		counter++;
	}
	return (b);
}
