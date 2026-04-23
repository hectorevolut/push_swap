/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecalder <hecalder@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 12:56:29 by hecalder          #+#    #+#             */
/*   Updated: 2025/11/12 13:30:26 by hecalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*chars1;
	const unsigned char	*chars2;
	size_t				i;

	chars1 = (const unsigned char *) s1;
	chars2 = (const unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (chars1[i] != chars2[i])
			return (chars1[i] - chars2[i]);
		i ++;
	}
	return (0);
}
