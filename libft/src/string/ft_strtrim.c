/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectorevolut <hectorevolut@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 14:12:22 by hecalder          #+#    #+#             */
/*   Updated: 2025/11/27 23:20:23 by hectorevolu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*end;
	char	*trim;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && in_set(*s1, set))
		s1++;
	end = (char *)s1 + ft_strlen(s1);
	while (end > s1 && in_set(*(end - 1), set))
		end--;
	len = end - s1;
	trim = (char *)malloc(len + 1);
	if (!trim)
		return (NULL);
	ft_memcpy(trim, s1, len);
	trim[len] = '\0';
	return (trim);
}
/*
int	main(void)
{
	char *s1 = "    Hola que tal ";
	char *trim = ft_strtrim(s1, "");
	printf("|%s|\n", trim);
	printf("%zu", ft_strlen(trim));
	return (0);
}
*/
/*
 * s1: String que debe ser recortada.
 * set: Los caracteres a recortar de la string.
 * Devuelve la string recortada (creada)
 * Devuelve NULL si falla algo.
 */
