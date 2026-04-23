/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecalder <hecalder@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 07:17:11 by hecalder          #+#    #+#             */
/*   Updated: 2025/11/12 07:48:52 by hecalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *str, size_t n)
{
	unsigned char		*chardest;
	const unsigned char	*charstr;
	size_t				i;

	if (!dest && !str)
		return (NULL);
	chardest = (unsigned char *) dest;
	charstr = (const unsigned char *) str;
	i = 0;
	while (i < n)
	{
		chardest[i] = charstr[i];
		i ++;
	}
	return (dest);
}
