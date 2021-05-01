/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 20:03:26 by apaula-b          #+#    #+#             */
/*   Updated: 2021/05/01 13:25:34 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_size(long int value)
{
	int			size;
	long int	compare_value;
	long int	check_value;

	size = 1;
	if (value < 0)
		value *= -1;
	compare_value = value;
	check_value = value /10;
	while (check_value >= 1)
		size++;
	return (size);
}

static char	*convert_positive(int value, int size, char *string)
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

static char	*convert_negative(int value, int size, char *string)
{
	int			last_value;
	int			counter;

	string[0] = '-';
	value *= -1;
	counter = size + 1;
	while (counter > 0)
	{
		last_value = value % 10;
		value /= 10;
		string[counter] = last_value + '0';
		counter--;
	}
	return (string);
}

char	*ft_itoa(int n)
{
	char	*value;
	int		size;
	int		spaces;

	spaces = 0;
	if (n < 0)
		spaces = 1;
	size = check_size(n);
	value = ft_calloc(sizeof(char), size + 1 + spaces);
	if (!value)
		return (NULL);
	if (value > 0)
		value = convert_positive(n, size, value);
	else
		value = convert_negative(n, size, value);
	return (value);
}
