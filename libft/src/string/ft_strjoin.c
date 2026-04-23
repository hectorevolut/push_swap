/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecalder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:48:31 by hecalder          #+#    #+#             */
/*   Updated: 2025/11/13 15:59:04 by hecalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*strjoin;
	size_t	i;
	size_t	j;

	strjoin = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!strjoin)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		strjoin[i] = s1[i];
		i ++;
	}
	j = 0;
	while (s2[j])
	{
		strjoin[i] = s2[j];
		i ++;
		j ++;
	}
	strjoin[i] = '\0';
	return (strjoin);
}
