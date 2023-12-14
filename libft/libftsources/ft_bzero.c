/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:58:16 by dylmarti          #+#    #+#             */
/*   Updated: 2023/10/03 13:50:59 by dylmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	if (n == 0)
		return ;
	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
	return ;
}
/*
#include <stdio.h>

int main(void) {
    char buffer[0]; // Créez un tableau de 10 caractères

    printf("Avant bzero : buffer = \"%s\"\n", buffer);

    // Utilisation de bzero (ou memset) pour initialiser le tableau à zéros

    printf("Après bzero : buffer = \"%s\"\n", buffer);

    return 0;
}
*/
