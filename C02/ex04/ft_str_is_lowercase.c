/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 21:03:23 by dleite-b          #+#    #+#             */
/*   Updated: 2024/08/29 14:10:45 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
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
	char str[] = "dslkjdlasjd";
	char str1[] = "dDSADlkjdlasjd";
	char str2[] = "dslkj233asjd";
	printf("Received: %d\n", ft_str_is_lowercase(str));
	printf("Received: %d\n", ft_str_is_lowercase(str1));
	printf("Received: %d\n", ft_str_is_lowercase(str2));
}*/
