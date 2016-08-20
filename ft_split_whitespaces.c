/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecunniet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 09:54:04 by ecunniet          #+#    #+#             */
/*   Updated: 2016/08/20 15:20:42 by ecunniet         ###   ########.fr       */
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
			&& (str[i + 1] == ' ' || (str[i + 1] >= 9
			&& str[i + 1] <= 13) || str[i + 1] == '\0'))
			j++;
		i++;
	}
	return (j);
}

int		ft_count_carac_words(char *str, int word)
{
	int i;
	int nbchar;
	int j;

	i = 0;
	nbchar = 0;
	j = 0;
	while (str[i] != '\0' && nbchar == 0)
	{
		if (!(str[i] == ' ' || (str[i] >= 8 && str[i] <= 13)) &&
		(str[i + 1] == ' ' || (str[i + 1] >= 8 && str[i + 1] <= 13) || str[i + 1] == '\0'))
			j++;
		if (j == word)
		{
			while (!(str[i] == ' ' || (str[i] >= 8 && str[i] <= 13)
				|| str[i] == '\0') && !(str[i + 1] == ' ' || (str[i + 1] >= 8
				&& str[i + 1] <= 13) || str[i + 1] == '\0'))
			{
				nbchar++;
				i++;
			}
		}
		i++;
	}
	return (nbchar + 2);
}

int		ft_position(char *str, int word, unsigned int n)
{
	unsigned int i;
	int k;

	i = 0;
	k = 0;
	
	while (str[i] != '\0' && k < word)
	{
		if (!(str[i] == ' ' || (str[i] >= 8 && str[i] <= 13))
			&& (str[i + 1] == ' ' || (str[i + 1] >= 8 && str[i + 1] <= 13) || str[i + 1] == '\0'))
			k++;
	i++;
	}
	while (str[i] == ' ' || (str[i] >= 8 && str[i] <= 13))
		i++;
	return (i);

}
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((i < n - 1) && (src[i] != '\0'))
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

char	**ft_split_whitespaces(char *str)
{		
	char **twords;
	int size;
	int word;
	unsigned int n;
	int position;

	word = 0;
	size = ft_count_words(str);
	twords = (char**)malloc(sizeof(char*) * (size + 1));
	while (word < size) 
	{
		n = ft_count_carac_words(str, word);
		twords[word] = (char*)malloc(sizeof(char) * (n + 1));
		position = ft_position(str, word, n);
		twords[word] = ft_strncpy(twords[word], &str[position], n);
		word++;
	}
	twords[word] = 0;
	return (twords);
}

int		main(void)
{
	char source[] = " \t  HAHAHA wkkw....     4325 djdjdj\n jewjej4";
	printf("%s\n", ft_split_whitespaces(source)[3]);
	return (0);
}
