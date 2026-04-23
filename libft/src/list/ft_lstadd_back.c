/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectorevolut <hectorevolut@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 09:20:18 by hecalder          #+#    #+#             */
/*   Updated: 2025/11/27 23:17:26 by hectorevolu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastnode;

	if (!*lst)
	{
		*lst = new;
	}
	else
	{
		lastnode = ft_lstlast(*lst);
		lastnode->next = new;
	}
}
/*
int	main(void)
{
	t_list
}
*/