/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:20:45 by dylmarti          #+#    #+#             */
/*   Updated: 2023/10/03 13:51:20 by dylmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest2;
	char	*src2;
	size_t	i;

	dest2 = (char *)dest;
	src2 = (char *)src;
	if (!dest2 && !src2 && n)
		return (dest2);
	i = 0;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest2);
}
/*
int main(void) 
{
	char	str[] = "Hello, World!";
	char	dest[20];

	printf("%s\n", (char *)ft_memcpy(dest, str + 7, 6));
	char str2[] = "Hello, World!";
	printf("%s\n", (char *)memcpy(dest,  str2 + 7, 6));
	return 0;
}*/