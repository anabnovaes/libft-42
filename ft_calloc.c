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
	void *pointer;

	if (count == 0 || size == 0 || !(pointer = malloc(count * sizeof(size))))
	{
		return (NULL);
	}
	else
	{
		pointer = malloc(count * sizeof(size));
		ft_bzero(pointer, size * count);
		return (pointer);
	}
}
