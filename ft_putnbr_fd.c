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
	long int	compare_value;

	size = 1;
	compare_value = value;
	while ((compare_value / 10) > 0)
	{
		compare_value /= 10;
		size++;
	}
	return (size);
}

static void	cnvr_vlue(long int value, int size, int fd)
{
	int			last_value;
	char		*string_print;
	int			counter;
	int			i;

	i = 0;
	counter = 1;
	string_print = NULL;
	while (counter <= size)
	{
		last_value = value % 10;
		value /= 10;
		string_print[size - counter] = last_value + '0';
		counter++;
	}
	string_print[size] = '\0';
	while (string_print[i] != '\0')
	{
		write(fd, &string_print[i], 1);
		i++;
	}
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
