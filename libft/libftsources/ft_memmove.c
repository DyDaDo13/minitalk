/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:02:41 by dylmarti          #+#    #+#             */
/*   Updated: 2023/10/05 21:37:14 by dylmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest2;
	char	*src2;
	size_t	i;

	dest2 = (char *)dest;
	src2 = (char *)src;
	if (!src2 && !dest2 && n)
		return (dest2);
	i = 0;
	if (dest2 < src2)
	{
		while (i < n)
		{
			dest2[i] = src2[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			dest2[n] = src2[n];
	}
	return (dest2);
}
/*
int main(void) 
{
	char str[] = "Hello, World!";

	printf("%s\n", (char *)ft_memmove(str + 1, str, 10));
	char str2[] = "Hello, World!";
	printf("%s\n", (char *)memmove(str2 + 1,  str2, 10));
	return 0;
}*/
