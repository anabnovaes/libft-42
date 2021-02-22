/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 17:52:09 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/22 19:22:37 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check_size(long int value)
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
	int		last_value;
	int		counter;
	char	string_print[size + 1];
	int		sub_vlue;
	int		i;

	i = 0;
	sub_vlue = 1;
	counter = 1;
	while (counter <= size)
	{
		last_value = value % 10;
		value /= 10;
		string_print[size - sub_vlue] = last_value + '0';
		counter++;
		sub_vlue++;
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
	long int	lng_vlue;
	int			size;

	lng_vlue = n;
	if (n < 0)
	{
		write(1, "-", 1);
		lng_vlue *= -1;
	}
	size = check_size(lng_vlue);
	cnvr_vlue(lng_vlue, size, fd);
}



