/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:22:24 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/20 11:19:37 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t cnt1;
	size_t cnt2;

	cnt1 = 0;
	if (len == 0)
	{
		return ((char *)haystack);
	}
	if (!needle)
	{
		return (NULL);
	}
	while (cnt1 < len && haystack[cnt1] != '\0')
	{
		cnt2 = 0;
		while (haystack[cnt1 + cnt2] == needle[cnt2] && cnt1 + cnt2 < len)
		{
			cnt2++;
		}
		if (needle[cnt2] == '\0')
		{
			return ((char *)haystack + cnt1);
		}
		cnt1++;
	}
	return (NULL);
}
