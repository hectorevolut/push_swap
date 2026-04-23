/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectorevolut <hectorevolut@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 16:21:35 by hecalder          #+#    #+#             */
/*   Updated: 2025/11/27 23:18:06 by hectorevolu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
int main(void)
{
    int     number;
    t_list  *newNode;
    
    number = 42;
    newNode = ft_lstnew(&number);
    printf("Dirección a la que apunta NEXT: %p\n", newNode->next);
    printf("Valor almacenado en CONTENT: %d\n", *(int *)newNode->content);
    free(newNode);
    return (0);   
}
*/