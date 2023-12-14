/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:41:09 by dylmarti          #+#    #+#             */
/*   Updated: 2023/10/03 13:54:19 by dylmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	j;

	j = 0;
	while (s[j])
		j++;
	return (j);
}
/*
#include <stdio.h>

int main(void) {
    const char *str = "Hello, World!";
    
    // Utilisation de la fonction strlen pour calculer la longueur de la chaîne
    size_t length = strlen(str);

    printf("La longueur de la chaîne est : %zu\n", length);

    return 0;
}
*/
