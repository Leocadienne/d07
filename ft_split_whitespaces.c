/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecunniet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 09:54:04 by ecunniet          #+#    #+#             */
/*   Updated: 2016/08/19 13:28:13 by ecunniet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if ((!(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
			&& (str[i + 1] == ' ' || (str[i + 1] >= 9 && str[i + 1] <= 13) || str[i + 1] == '\0'))
			j++;
		i++;
	}
	return (j);
}
int        ft_count_carac_words(char *str, int word)
{
	int i;
	int nbcchar;
	int j;

	i = 0;
	nbchar = 0;
	j = 0;
	while (str[i] != '\0' && nbchar == 0)
	{
		if (!(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			&& (str[i + 1] == ' ' || (str[i + 1] >= 9 && str[i + 1] <= 13) || str[i + 1] == '\0'))
			j++;
		if (j == word)
		{
			while (!(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13) || str[i] == '\0')
				 && !(str[i + 1] == ' ' || (str[i + 1] >= 9 && str[i + 1] <= 13) || str[i + 1] == '\0'))
			{
				nbchar++;
				i++;
			}
			i++;
		}
		return (nb + 2);
	}
}

/*char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((i < n) && (src[i] != '\0'))
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
}*/

char	**ft_split_whitespaces(char *str)
{		
	char **twords;
	int size;
	int word;

	word = 0:
	size = ft_count_words(str);
	twords = (char**)malloc(sizeof(char) * (size + 1));
	while (word < size + 1)
	{
		twords[i] = (char*)malloc(size(char) *(ft_count_char(str, word) + 1));
		i++;
	}
}

int		main(void)
{
	char source[] = " \t  HAHAHA wkkw.... 4325 djdjdj\n jewjej4";
	printf("%d\n", ft_count_words(source));
	return (0);
}
