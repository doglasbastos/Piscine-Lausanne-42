/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 22:20:22 by dleite-b          #+#    #+#             */
/*   Updated: 2024/08/29 14:44:31 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
			i++;
	}
	return (str);
}
/*#include<stdio.h>
int main()
{
	char str[] = "doglasleite";
	char str1[] ="DJadkDSA";
	printf("doglasleite = %s\n", ft_strupcase(str));
	printf("DJadkDSA = %s\n", ft_strupcase(str1));
}*/
