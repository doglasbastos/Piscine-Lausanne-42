/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 20:09:04 by dleite-b          #+#    #+#             */
/*   Updated: 2024/08/29 13:56:59 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include<stdio.h>
int main(void)
{
	char str[] = "AZ";
	char str1[] = "V4moA la";
	char str2[] = "VidaLok";
	//ft_str_is_alpha(str);
	printf(" received : %d\n", ft_str_is_alpha(str));
	printf(" received : %d\n", ft_str_is_alpha(str1));
	printf(" received : %d\n", ft_str_is_alpha(str2));


}*/
