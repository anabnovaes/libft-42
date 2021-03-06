/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 18:23:41 by apaula-b          #+#    #+#             */
/*   Updated: 2021/05/01 12:49:27 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	counter;
	char			*string;

	counter = 0;
	if (s == NULL)
		return (NULL);
	string = malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (!string)
		return (NULL);
	while (s[counter] != '\0')
	{
		string[counter] = f(counter, s[counter]);
		counter++;
	}
	string[counter] = '\0';
	return (string);
}
