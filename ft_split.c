/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 19:35:53 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/27 16:08:13 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	frequency(const char *s, char c)
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

static size_t	pos_c(const char *s, char c, size_t init)
{
	size_t counter;

	counter = init;
	while(s[counter])
	{
		if(s[counter] == c)
			return counter;
	}
	return (0);
}

char			**ft_split(char const *s, char c)
{
	int			times_sequence;
	int			count;
	char	**words;
	int			sum;
	int			position;
	
	count = 0;
	sum = -1;
	times_sequence = frequency(s, c);
	words = (char**)malloc(sizeof(char *) * times_sequence + 1);

	if(times_sequence == 0 || s == NULL || !c || !words) 
		return (NULL);
	while (count < times_sequence)
	{
		position = pos_c(s, c, sum);
		if(position == 0)
			position = ft_strlen((char *)s);
		words[count] = ft_substr((char *)s, sum + 1, sum + position - 1);
		sum += position;
		count++;
	}
	words[times_sequence] = NULL;
	return (words);
}

