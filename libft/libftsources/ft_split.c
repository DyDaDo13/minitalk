/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylmarti <dylmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:44:16 by dylmarti          #+#    #+#             */
/*   Updated: 2023/10/09 15:50:19 by dylmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wd_count(char *s, char c)
{
	int	i;
	int	wd;

	i = 0;
	wd = 0;
	while (s && s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			wd++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (wd);
}

static char	**is_in(char const *s, char c, char **result)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		j = 0;
		while (s[i + j] && s[i + j] != c)
			j++;
		if (j)
		{
			result[word] = ft_calloc(sizeof(char), j + 1);
			if (!result[word])
				return (NULL);
			ft_strlcpy(result[word], &(s[i]), j + 1);
			word++;
		}
		i = i + j;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	result = (char **)ft_calloc(sizeof(char *), wd_count((char *)s, c) + 1);
	if (!result)
		return (NULL);
	return (is_in(s, c, result));
}
/*
int	main(void)
{
	char	str[] = "  d sa  das da sd as ";
	char	sep = ' ';
	char	**result;
	int		i;

	i = 0;
	result = ft_split(str, sep);
	while (result && result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}*/
