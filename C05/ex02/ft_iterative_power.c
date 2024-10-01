/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 02:41:46 by dleite-b          #+#    #+#             */
/*   Updated: 2024/09/08 15:38:25 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	result = nb;
	i = 1;
	while (i < power)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

/*  int main()
{
	printf(" %d ", ft_iterative_power(5, 3));
	
} */
