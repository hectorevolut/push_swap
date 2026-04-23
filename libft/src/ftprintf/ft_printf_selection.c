/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_selection.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecalder <hecalder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 00:56:58 by hecalder          #+#    #+#             */
/*   Updated: 2026/02/15 11:03:42 by hecalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_select(char selector, va_list *varg )
{
	int	bytes;

	bytes = 0;
	if (selector == '%' || selector == 'c')
		bytes = ft_print_char(selector, varg);
	else if (selector == 's')
		bytes = ft_print_str(selector, varg);
	else if (selector == 'd' || selector == 'i' || selector == 'u')
		bytes = ft_print_numbers(selector, varg);
	else if (selector == 'x' || selector == 'X')
		bytes = ft_print_hexadecimal(selector, varg);
	else if (selector == 'p')
		bytes = ft_print_pointer(selector, varg);
	return (bytes);
}
