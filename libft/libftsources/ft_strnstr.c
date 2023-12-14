/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylmarti <dylmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:02:21 by dylmarti          #+#    #+#             */
/*   Updated: 2023/10/10 17:43:22 by dylmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	extracted(int *k, int r, int i)
{
	if (r == 0)
		*k = i;
	return (r + 1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	r;
	size_t	i;
	int		k;

	r = 0;
	i = 0;
	k = -1;
	if (little[r] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == little[r])
			r = extracted(&k, r, i);
		i++;
		if (r == ft_strlen(little))
			return ((char *)big + k);
		if (big[i] != little[r] && k != -1)
		{
			i = k + 1;
			r = 0;
			k = -1;
		}
	}
	return (0);
}
/*
int	main(void)
{
	printf("%s", ft_strnstr("xfdfxbonfdsfs", "bon", 12));
	return (0);
}*/
