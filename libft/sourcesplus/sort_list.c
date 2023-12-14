/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dydado13 <dydado13@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:35:17 by dydado13          #+#    #+#             */
/*   Updated: 2023/12/14 18:43:02 by dydado13         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	cmp(int a, int b)
{
	return (a <= b);
}

t_list	*sort_list(t_list *lst)
{
	int		swap;
	t_list	*tmp;

	tmp = lst;
	while (lst->next != NULL)
	{
		if ((cmp(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}
