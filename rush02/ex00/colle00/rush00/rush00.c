/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegirar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 09:15:46 by clegirar          #+#    #+#             */
/*   Updated: 2017/07/22 11:44:19 by clegirar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle00.h"

void	print_line(int x, int y, int i, int j)
{
	if ((j == 0 && i == 0) || (j == x - 1 && i == 0)
			|| (i == y - 1 && j == 0) || (i == y - 1 && j == x - 1))
		ft_putchar('o');
	else if (i == 0 || i == y - 1)
		ft_putchar('-');
	else if (j == x - 1 && i > 0 && i < y && x > 1)
		ft_putchar('|');
	else if (j + 1 < x - 1)
		ft_putchar(' ');
}

int		rush(int x, int y)
{
	int		i;
	int		j;

	i = 0;
	if (x <= 0 || y <= 0)
		return (-1);
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			print_line(x, y, i, j);
			j++;
		}
		ft_putchar('\n');
		i++;
		if (i > 0 && i < y - 1)
			ft_putchar('|');
	}
	return (0);
}
