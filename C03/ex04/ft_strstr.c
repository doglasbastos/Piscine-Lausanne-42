/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 05:22:52 by dleite-b          #+#    #+#             */
/*   Updated: 2024/09/02 14:13:53 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strstr( char *str, char *to_find)
{
	int	i;
	int	counttf;
	int	x;

	i = 0;
	counttf = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		counttf = 0;
		x = i;
		while (to_find[counttf] && str[x] == to_find[counttf])
		{
			if (to_find[counttf + 1] == '\0')
				return (str + i);
		x++;
		counttf++;
		}		
	i++;
	}
	return (0);
}
