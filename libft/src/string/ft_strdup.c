/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecalder <hecalder@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 19:28:27 by hecalder          #+#    #+#             */
/*   Updated: 2025/11/11 21:11:44 by hecalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length])
		length ++;
	return (length);
}

char	*ft_strdup(const char *s)
{
	char	*ptr;
	char	*aux;

	ptr = malloc(strlen(s) + 1);
	if (!ptr)
		return (NULL);
	aux = ptr;
	while (*s)
	{
		*ptr = *s;
		ptr ++;
		s ++;
	}
	*ptr = '\0';
	return (aux);
}
