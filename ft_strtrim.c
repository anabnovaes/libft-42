/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 17:13:07 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/28 11:04:36 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	size_t	counter;

	counter = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	size = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[counter]) && s1[counter] != '\0')
	{
		counter++;
	}
	while (ft_strchr(set, s1[size]) && counter < size)
	{
		size--;
	}
	return (ft_substr(s1, counter, size - counter + 1));
}
