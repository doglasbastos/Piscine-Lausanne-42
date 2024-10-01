/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 22:40:35 by dleite-b          #+#    #+#             */
/*   Updated: 2024/09/08 00:32:40 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				c;

	c = 0;
	while (src[c])
		c++;
	i = 0;
	if (size != 0)
	{
		while (src[i] != '0' && (size -1) > i)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (c);
}

/* int	main(void)
{
	char str[] = "Hello";
	char str2[] = "dwadwdad";
	int	size;

	size = 4;
	ft_strlcpy(str, str2, size);
} */
