/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 19:35:53 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/25 21:31:02 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_s(char *s, char c)
{
	size_t 		count;

	count = 0;
	while(*s)
	{
		if(*s == c)
			count++;
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	size_t		times_sequence;
	size_t		count;
	const char	**pointer; 
	
	times_sequence = count_s((char *)s, c);
	count = 0;
	if(times_sequence == 0 || s == NULL || !c)
	{
		return (NULL);
	}
	if (!(pointer = malloc(times_sequence + 1)))
	{
		return (NULL);
	}


	return (pointer);
}