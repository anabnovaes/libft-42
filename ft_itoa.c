/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 20:03:26 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/23 21:56:30 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check_size(long int value)
{
	int			size;
	long int	compare_value;

	size = 1;
	if (value < 0)
		value *= -1;
	compare_value = value;
	while ((compare_value /= 10) >= 1)
		size++;
	return (size);
}

static char		*cnvr_vlue(long int value, int size , char *string)
{
	int			last_value;
	int			counter;

	counter = 1;
	if (value >= 0)
	{
		while (counter <= size)
		{
			last_value = value % 10;
			value /= 10;
			string[size - counter] = last_value + '0';
			counter++;
		}
		string[size] = '\0';
	}
	else
	{
		string[0] = '-';
		value *= -1;
		counter = size;
		while (counter > 0)
		{
			last_value = value % 10;
			value /= 10;
			string[counter] = last_value + '0';
			counter--;
		}
		string[size + 1] = '\0';
	}
	
	return (string);
}

char			*ft_itoa(int n)
{
	char 		*value;
	int 		size;
	int 		spaces;

	spaces = 0;
	size = check_size(n);
	if(n < 0)
		spaces = 1;
	if (!(value = malloc(size + 1 + spaces)))
		return (NULL);
	value = cnvr_vlue(n, size, value);
	return (value);
}
