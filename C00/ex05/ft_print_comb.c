/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:12:29 by dleite-b          #+#    #+#             */
/*   Updated: 2024/08/23 02:08:33 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ftpuchar(char c)
{
	write (1, &c, 1);
}

void	ftprint(char x, char y, char z)
{
	ftpuchar(x);
	ftpuchar(y);
	ftpuchar(z);
	if (!(x == '7' && y == '8' && z == '9'))
	{
		ftpuchar (',');
		ftpuchar (' ');
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{	
				ftprint(x, y, z);
					z++;
			}
			y++;
		}
		x++;
	}
}
/*	int main (void)
	{
		ft_print_comb();
		return (0);
	}*/
