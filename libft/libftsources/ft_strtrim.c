/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylmarti <dylmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:32:26 by dylmarti          #+#    #+#             */
/*   Updated: 2023/10/11 10:19:18 by dylmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_in(char const *set, char const s1)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	size_t		start;
	size_t		end;
	size_t		len;

	start = 0;
	if (s1 == NULL)
		return (NULL);
	end = ft_strlen(s1);
	while (ft_in(set, s1[start]) == 1)
		start++;
	while (end > start && ft_in(set, s1[end - 1]) == 1)
		end--;
	len = end - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1 + start, len + 1);
	return (str);
}
/*
int	main(void)
{
	printf("%s", ft_strtrim("babababaBonjourabb", "ab"));
	return (0);
}*/
