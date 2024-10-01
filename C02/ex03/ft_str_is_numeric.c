/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:51:21 by dleite-b          #+#    #+#             */
/*   Updated: 2024/08/29 14:04:39 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
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

	char str[] = "561651651";
	char str1[] = "222d1sa";
	char str2[] = "1235@#$$";
//	ft_str_is_numeric(str)
		printf("Received :%d\n", ft_str_is_numeric(str));
		printf("Received :%d\n", ft_str_is_numeric(str1));
		printf("Received :%d\n", ft_str_is_numeric(str2));
				return (0);
}*/
