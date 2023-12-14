/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylmarti <dylmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:52:58 by dylmarti          #+#    #+#             */
/*   Updated: 2023/10/07 15:58:29 by dylmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
int	main(void)
{
	int	i;
	int	c;
	
	i = 0;
    while (i <= 47)
    {
        c = ft_toupper(i);
        write(1, &c, 1);
        i++;
    }
	write(1, "\n", 1);
	i = 0;
    while (i <= 47)
    {
        c = toupper(i);
        write(1, &c, 1);
        i++;
    }
}*/
