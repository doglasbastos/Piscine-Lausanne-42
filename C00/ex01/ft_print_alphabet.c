/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 00:17:28 by dleite-b          #+#    #+#             */
/*   Updated: 2024/08/23 01:53:17 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	letters;	

	letters = 'a';
	while (letters <= 'z')
	{
		write(1, &letters, 1);
		letters++;
	}
}

/*/int main (void)
{
	ft_print_alphabet();
	return (0);
}
*/
