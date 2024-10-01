/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:08:46 by dleite-b          #+#    #+#             */
/*   Updated: 2024/08/29 12:20:12 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int	main(void)
{
	
	char dest[50] = "";
	char src[] = ("Testando A PoTeNcIa do String");
	ft_strcpy (dest, src);
	printf (" Dest: %s\n", dest);
	return (0);
}*/
