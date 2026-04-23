/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecalder <hecalder@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 08:41:32 by hecalder          #+#    #+#             */
/*   Updated: 2025/11/12 09:17:29 by hecalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*chardest;
	const unsigned char	*charsrc;
	size_t				i;

	if (dest == src || n == 0)
		return (dest);
	chardest = (unsigned char *) dest;
	charsrc = (const unsigned char *) src;
	if (chardest > charsrc && chardest < charsrc + n)
	{
		i = n;
		while (i > 0)
		{
			i --;
			chardest[i] = charsrc[i];
		}
	}
	else
	{
		while (n--)
			*chardest++ = *charsrc++;
	}
	return (dest);
}
