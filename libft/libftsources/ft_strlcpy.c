/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylmarti <dylmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:47:55 by dylmarti          #+#    #+#             */
/*   Updated: 2023/10/09 13:53:57 by dylmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	len;

	len = ft_strlen(src);
	j = 0;
	if (size != 0)
	{
		while (src[j] && j < size - 1)
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = '\0';
	}
	return (len);
}
/*
#include <stdio.h>

int main(void) 
{
	char source[] = "lorem ipsum dolor sit amet";
	char dest[20];

	printf("%zu\n", (size_t)ft_strlcpy(dest, source, 15));
	return (0);
}*/
