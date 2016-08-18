/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecunniet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 13:25:14 by ecunniet          #+#    #+#             */
/*   Updated: 2016/08/18 14:33:27 by ecunniet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int size;
	int *tint;
	int i;

	i = 0;
	size = max - min;
	if (size <= 0)
		tint = 0;
	else
		tint = (int*)malloc(sizeof(*tint) * (size));
	while (i < size)
	{
		tint[i] = min + i;
		i++;
	}
	return (tint);
}
