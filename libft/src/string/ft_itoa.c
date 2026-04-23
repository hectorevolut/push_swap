/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecalder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:28:50 by hecalder          #+#    #+#             */
/*   Updated: 2025/11/30 16:54:55 by hecalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int		count;
	long	nb;

	nb = n;
	count = (nb <= 0);
	if (nb < 0)
		nb = -nb;
	while (nb)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	int		len;
	long	nb;

	nb = n;
	len = count_digits(n);
	itoa = malloc(len + 1);
	if (!itoa)
		return (NULL);
	itoa[len] = '\0';
	if (nb < 0)
	{
		itoa[0] = '-';
		nb *= -1;
	}
	while (--len >= 0 && itoa[len] != '-')
	{
		itoa[len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (itoa);
}
