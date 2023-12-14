/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylmarti <dylmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:06:48 by dylmarti          #+#    #+#             */
/*   Updated: 2023/10/07 19:04:14 by dylmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen((char *)s);
	s2 = malloc(sizeof(char) * size + 1);
	if (s2 == NULL)
		return (NULL);
	while (s[i])
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/*
int	main(void)
{
	char	*str;
	int	i;

	i = 0;
	str = ft_strdup("hey");
	printf("%s\n", ft_strdup("hey"));
	printf("%s\n", strdup("hey"));
	while (str[i])
	{
		if (str[i + 1] == '\0')
		{
			printf("%s", "oui il y a une fin");
			return (0);
		}
		else
			i++;
	}
	printf("%s", "non il y a une erreur");
	return (0);
}*/
