/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:33:37 by dleite-b          #+#    #+#             */
/*   Updated: 2024/09/01 05:59:24 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*#include<stdio.h>
int main()
{
	char s1[] = "doglasdoglas";
	char s2[] = "doglasdoglas";

	char m1[] = "DoDoglas";
	char m2[] = "dogjwdsk";

	printf( "Resultat = %d por dodoglas\n", ft_strcmp(s1, s2));
	printf( "Resultat = %d por dodoglas\n", ft_strcmp(m1, m2));
}*/
