/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dydado13 <dydado13@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:29:00 by dylmarti          #+#    #+#             */
/*   Updated: 2023/10/10 09:41:06 by dydado13         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*str;

	i = 0;
	size = len;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		size = ft_strlen(s) - start;
	str = malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	while (i < size)
	{
		str[i] = ((char *)s)[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
int	main(void)
{
	char *str = "bonjourggggggggggggggggggggggggggggggggggggggggggggggggggsava";
    size_t size = 398784;
    char *ret = ft_substr(str, 8, size);

    if (!strncmp(ret, "", 1))
    {
        free(ret);
    	printf("%s", "TEST_SUCCESS");
		return (0);
	}
    free(ret);
	printf("%s", "TEST_FAILED");
	return (0);
}

*/
/*
int	main(void)
{
	printf("%s\n", ft_substr("----bonjour---test      ", 4, 56760));
	return (0);
}*/
