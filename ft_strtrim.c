/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 17:13:07 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/21 17:47:44 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*pointer;
	size_t	size;
	size_t	counter;

	size = ft_strlen((char *)s1);
	if (!(pointer = malloc(size + 1)))
		return (NULL);
}
