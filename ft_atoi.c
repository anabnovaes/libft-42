/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-b <apaula-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 09:41:55 by apaula-b          #+#    #+#             */
/*   Updated: 2021/02/11 20:55:20 by apaula-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	char_to_int(char amount);
int	check_signal(char position);

int			ft_atoi(const char *str)
{
	int counter;
	char position;
	char value;

	value = 0;
	counter = 0;
	position = str[counter];
	while (position != '\0')
	{
		if(position = '-')
		{
			value *= -1;
		}
		else if (ft_isdigit(position) == 1 )
		{
			value += str[counter];
			counter++;
		}
		else
		{
			break ;
		}
	}
}


static int		char_to_int(char amount)
{
}
