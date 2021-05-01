/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 19:35:53 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/28 11:19:16 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_couter(const char *s, char c)
{
	size_t		delimiter;
	size_t		words;

	delimiter = 1;
	words = 0;
	while (*s)
	{
		if (*s != c && delimiter)
		{
			delimiter = 0;
			words++;
		}
		else if (*s == c)
			delimiter = 1;
		s++;
	}
	return (words);
}

static size_t	size_word(char const *s, char c, int initial)
{
	while (s[initial] != c && s[initial] != '\0')
		initial++;
	return (initial);
}

char			**ft_split(char const *s, char c)
{
	int			n_words;
	int			i;
	int			count;
	char		**p;

	i = 0;
	count = 0;
	if (s == NULL)
		return (NULL);
	n_words = word_couter(s, c);
	if (!(p = (char **)malloc(sizeof(char *) * (n_words + 1))))
		return (NULL);
	p[n_words] = NULL;
	while (i < n_words)
	{
		while (s[count] == c)
			count++;
		p[i] = ft_substr((char *)s + count, 0,
			(size_word(s, c, count) - count));
		i++;
		count = size_word(s, c, count);
	}
	return (p);
}
