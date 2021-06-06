/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 17:52:09 by apaula-b          #+#    #+#             */
/*   Updated: 2021/06/06 11:17:34 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	counter;
	int	print;

	counter = n;
	if (counter < 0)
	{
		ft_putchar_fd('-', fd);
		counter *= -1;
	}
	if (counter < 10)
	{
		print = counter + 48;
		ft_putchar_fd(print, fd);
		return ;
	}
	else
		ft_putnbr_fd(counter / 10, fd);
	ft_putnbr_fd(counter % 10, fd);
}
