/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 21:34:05 by dleite-b          #+#    #+#             */
/*   Updated: 2024/09/01 23:01:02 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < (n -1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int main()
{
	char a[] = "$";
	char b[] = "D";


	printf(" %s = %s, ca veut dire : %d\n", a, b, ft_strncmp(a, b, 1));
*/
