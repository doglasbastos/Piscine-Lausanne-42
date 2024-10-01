/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-b <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:41:20 by dleite-b          #+#    #+#             */
/*   Updated: 2024/09/12 19:55:19 by dleite-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
	{
		return (0);
	}
	i = max - min;
	result = (int *)malloc(sizeof(int) * (i));
	if (result == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (max > min)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
/* #include<stdio.h>

int main(void)
{
	int min;
	int max;
	int *array;
	int i = 0;
	int size;

	min = 5;
	max = 10;
	size = max - min;
	array = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", array[i]);
		i++;
	}
} */
