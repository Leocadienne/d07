/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecunniet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 16:34:11 by ecunniet          #+#    #+#             */
/*   Updated: 2016/08/18 16:43:48 by ecunniet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;

	i = 0;
	size = max - min;
	if (size <= 0)
		*range = 0;
	else
		*range = (int*)malloc(sizeof(int) * (size));
	while (i < size)
	{
		*range[i] = min + i;
		i++;
	}
	return (size);
}
