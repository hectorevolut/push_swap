/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecalder <hecalder@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:30:24 by hecalder          #+#    #+#             */
/*   Updated: 2025/11/11 19:25:18 by hecalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*init;
	size_t			i;

	init = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		init[i] = (unsigned char) c;
		i ++;
	}
	return (s);
}
