/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:22:13 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/06 13:16:43 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	unsigned int size;

	size = 0;
	while (size < n && src[size] != '\0')
	{
		dest[size] = src[size];
		size++;
	}
	while (size < n)
	{
		dest[size] = '\0';
		size++;
	}
	return (dest);
}