/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 20:24:15 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/19 22:38:30 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (count == 0 && size == 0)
	{
		free(p);
	}
	else if (!(p = malloc(count * size)))
	{
		return(NULL);
	}
	else
	{
		ft_bzero(p, size * count);
	}
	return (NULL);
}
