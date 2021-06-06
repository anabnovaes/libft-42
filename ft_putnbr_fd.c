/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 17:52:09 by apaula-b          #+#    #+#             */
/*   Updated: 2021/05/23 11:04:51 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

void	ft_putnbr_fd(int n, int fd)
{
	long int	print_value;
	int			size;

	print_value = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		print_value *= -1;
	}
	size = check_size(print_value);
	cnvr_vlue(print_value, size, fd);
}
