/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:20:29 by dleite-b          #+#    #+#             */
/*   Updated: 2024/08/29 12:33:23 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char src[] = "badDoug";
	char dest_ft[25] = "";
	char dest_st[25] = "";
	int n = 15;
	ft_strncpy(dest_ft, src, n);
	strncpy(dest_st, src, n);
	printf("Accepted: %s\n", dest_st);
	printf("received: %s\n", dest_ft);
}*/
