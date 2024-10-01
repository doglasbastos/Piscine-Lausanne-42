/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 22:02:41 by dleite-b          #+#    #+#             */
/*   Updated: 2024/09/08 00:32:10 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 0;
	while (str[i] != '\0')
	{
		if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
			check = 1;
		else if (str[i - 1] >= 'A' && str[i -1] <= 'Z')
			check = 1;
		else if (str[i -1] >= '0' && str[i -1] <= '9')
			check = 1;
		else
			check = 0;
		if (str[i] >= 'A' && str[i] <= 'Z' && check == 1)
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z' && check == 0)
			str[i] -= 32;
		i++;
	}
	return (str);
}
