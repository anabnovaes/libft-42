/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 15:03:08 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/21 18:06:12 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	size_s1;
	unsigned int	size_s2;
	char			*join;

	size_s1 = ft_strlen((char *)s1);
	size_s2 = ft_strlen((char *)s2);
	if (!(join = malloc(size_s1 + size_s2 + 1)) || (s1 == NULL && s2 == NULL))
		return (NULL);
	ft_strlcpy(join, s1, size_s1 + 1);
	ft_strlcat(join, s2, size_s2 + size_s1 + 1);
	return (join);
}
