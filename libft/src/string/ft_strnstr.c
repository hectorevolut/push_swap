/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectorevolut <hectorevolut@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:51:32 by hecalder          #+#    #+#             */
/*   Updated: 2025/11/27 23:19:56 by hectorevolu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	if (little[0] == '\0')
		return ((char *)big);
	needle_len = ft_strlen(little);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j])
		{
			j++;
			if (j == needle_len)
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
