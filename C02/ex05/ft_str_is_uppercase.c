/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 21:29:22 by dleite-b          #+#    #+#             */
/*   Updated: 2024/08/29 14:21:43 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include<stdio.h>

int main (void)
{	
	char str[] = "DASDAHJDKAHS";
	char str1[] = "DADdsadaSDAHJDKAHS";
	printf("Received: %d\n ", ft_str_is_uppercase(str));
	printf("Received: %d\n ", ft_str_is_uppercase(str1));
}*/
