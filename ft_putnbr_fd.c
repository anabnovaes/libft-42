/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 17:52:09 by apaula-b          #+#    #+#             */
/*   Updated: 2021/06/06 01:04:34 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_size(long int value)
{
	int			size;
	long int	compare_value;

	size = 1;
	compare_value = value / 10;
	while (compare_value > 0)
	{
		compare_value /= 10;
		size++;
	}
	return (size);
}


static char	*convert_positive(long int value, int size, int fd)
{
	int			last_value;
	int			counter;
	char		*string;
	int			i;

	counter = 1;
	string = NULL;
	while (counter <= size)
	{
		last_value = value % 10;
		value /= 10;
		string[size - counter] = last_value + '0';
		counter++;
	}
	string[size] = '\0';
	i = 0;
	while (string[i] != '\0')
	{
		write(fd, &string[i], 1);
		i++;
	}
}

static char	*convert_negative(int value, int size, int fd)
{
	int			last_value;
	int			counter;
	char		*string;
	int			i;

	string = NULL;
	string[0] = '-';
	counter = size;
	while (counter > 0)
	{
		last_value = value % 10;
		value /= 10;
		string[counter] = (last_value * -1) + '0';
		counter--;
	}
	if (!value)
		string = "0";
	i = 0;
	while (string[i] != '\0')
	{
		write(fd, &string[i], 1);
		i++;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int			size;

	size = check_size(n);
	if (n <= 0)
		convert_negative(n, size, fd);
	else
		convert_positive(n, size, fd);
}
