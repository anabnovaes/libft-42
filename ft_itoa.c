/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 20:03:26 by apaula-b          #+#    #+#             */
/*   Updated: 2021/05/23 11:05:52 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	check_size(long int value)
{
	int			size;
	long int	check_value;

	size = 0;
	if (value < 0)
		value *= -1;
	check_value = value / 10 ;
	while (check_value >= 1)
	{
		check_value /= 10 ;
		size++;
	}
	return (size);
}

static char	*cnvr_vlue(long int value, int size, char *string)
{
	int			last_value;
	int			counter;

	counter = 0;
	while (counter <= size)
	{
		last_value = value % 10;
		value /= 10;
		string[size - counter] = last_value + '0';
		counter++;
	}
	return (string);
}

char	*ft_itoa(int n)
{
	char		*value;
	int			size;
	int			spaces;
	char		*temp;

	spaces = 0;
	size = check_size(n);
	printf("size %d \n", size);
	if (n < 0)
		spaces = 1;
	value = ft_calloc(sizeof(char), size + 1 + spaces);
	if (!value)
		return (NULL);
	if (n < 0)
	{
		temp = cnvr_vlue(n * -1, size, value);
		value = ft_strjoin("-", temp);
	}
	else
		value = cnvr_vlue(n, size, value);
	return (value);
}
