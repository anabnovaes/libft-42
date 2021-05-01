/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:22:05 by apaula-b          #+#    #+#             */
/*   Updated: 2021/05/01 12:59:38 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	size_s1;
	char	*s2;

	size_s1 = ft_strlen((char *)s1);
	s2 = malloc(size_s1 + 1);
	if (s1 == NULL)
		return (NULL);
	else if (!s2)
		return (NULL);
	else
	{
		ft_strlcpy(s2, s1, size_s1 + 1);
		return (s2);
	}
}
