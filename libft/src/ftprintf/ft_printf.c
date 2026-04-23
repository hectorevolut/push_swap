/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecalder <hecalder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 20:29:09 by hecalder          #+#    #+#             */
/*   Updated: 2026/02/18 14:44:27 by hecalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int			bytes;
	va_list		varg;
	char		selector;

	if (!str)
		return (-1);
	va_start (varg, str);
	bytes = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str ++;
			selector = *str;
			bytes += ft_print_select(selector, &varg);
		}
		else
		{
			ft_putchar(*str);
			bytes += 1;
		}
		str ++;
	}
	va_end(varg);
	return (bytes);
}
