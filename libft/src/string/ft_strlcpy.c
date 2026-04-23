/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecalder <hecalder@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:59:34 by hecalder          #+#    #+#             */
/*   Updated: 2025/11/12 14:27:51 by hecalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen((src));
	if (dstsize == 0)
		return (srcsize);
	if (dstsize > 0)
	{
		i = 0;
		while (i < dstsize - 1 && src[i])
		{
			dst[i] = src[i];
			i ++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}
