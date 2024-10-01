/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 02:15:26 by dleite-b          #+#    #+#             */
/*   Updated: 2024/09/08 12:45:02 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	resultat;

	resultat = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		resultat = nb * ft_recursive_factorial(nb - 1);
	}
	return (resultat);
}

/* int main()
 
{
	int nb = 10;
	printf(" %d", ft_recursive_factorial(nb));
}*/
