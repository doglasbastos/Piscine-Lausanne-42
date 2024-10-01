/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 21:36:31 by dleite-b          #+#    #+#             */
/*   Updated: 2024/08/29 14:32:11 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
	char str[] = "\n";
	char str1[] = "dsadalksjdka";
	printf("Received: %d\n", ft_str_is_printable(str));
	printf("Received: %d\n", ft_str_is_printable(str1));
}*/
