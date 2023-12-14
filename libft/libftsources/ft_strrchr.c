/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylmarti <dylmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:07:01 by dylmarti          #+#    #+#             */
/*   Updated: 2023/10/07 19:01:57 by dylmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*end;
	int		i;

	end = NULL;
	i = 0;
	while (s[i])
	{
		if ((char)s[i] == (char)c)
			end = ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (end);
}
/*
int	main(void)
{
	printf("%s\n", ft_strrchr("bonjour je mapelle moi", 'm'));
	printf("%s", strrchr("bonjour je mapelle moi", 'm'));
	return (0);
}*/
