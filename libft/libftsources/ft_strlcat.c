/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylmarti <dylmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:12:43 by dylmarti          #+#    #+#             */
/*   Updated: 2023/10/07 15:47:28 by dylmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	j;
	size_t	i;

	j = 0;
	i = 0;
	len_src = ft_strlen(src);
	if (size < ft_strlen(dst))
		return (len_src + size);
	if (size == 0)
		return (len_src);
	while (dst[i] && i < size)
		i++;
	len_dst = i;
	while (src[j] && i + j < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (len_dst + len_src);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	source[] = "lorem ipsum dolor sit amet";
	char	dest[10] = "rrrrrr";

	//strlcat(dest, source, 15);
	//printf("%s", dest);
	printf("%zu\n", ft_strlcat(dest, source, 6));
	printf("%s", dest);
	return (0);
}*/
