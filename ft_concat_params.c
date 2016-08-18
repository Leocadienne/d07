/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecunniet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 17:17:04 by ecunniet          #+#    #+#             */
/*   Updated: 2016/08/19 00:44:59 by ecunniet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_find_size(int argc, char **argv)
{
	int i;
	int size;

	i = 1;
	size = 0;
	if (argc > 1)
	{
		while (i < argc)
		{
			size = size + (ft_strlen(argv[i])) + 1;
			i++;
		}
		size -= 1;
	}
	return (size);
}

char	*ft_strcat(int argc, char *tchar, char **argv)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 1;
	while (k < argc)
	{
		while (argv[k][j] != '\0')
		{
			tchar[i + j] = argv[k][j];
			j++;
		}
		tchar[i + j] = '\n';
		j++;
		i = i + j;
		j = 0;
		k++;
	}
	tchar[i + j - 1] = '\0';
	return (tchar);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*tchar;

	tchar = (char*)malloc(sizeof(char) * (ft_find_size(argc, argv)));
	tchar[0] = '\0';
	return (ft_strcat(argc, tchar, argv));
}
