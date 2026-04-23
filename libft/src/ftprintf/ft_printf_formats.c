/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_formats.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecalder <hecalder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 21:01:22 by hecalder          #+#    #+#             */
/*   Updated: 2026/02/18 16:01:40 by hecalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(char selector, va_list *varg)
{
	int	bytes;

	bytes = 0;
	if (selector == '%')
	{
		ft_putchar(selector);
		bytes = 1;
	}
	else if (selector == 'c')
	{
		ft_putchar((char)va_arg(*varg, int));
		bytes = 1;
	}
	return (bytes);
}

int	ft_print_str(char selector, va_list *varg)
{
	char	*varg_str;
	int		bytes;

	bytes = 0;
	if (selector == 's')
	{
		varg_str = va_arg(*varg, char *);
		if (varg_str == NULL)
		{
			ft_putstr("(null)");
			bytes = 6;
		}
		else
		{
			ft_putstr(varg_str);
			bytes = ft_strlen(varg_str);
		}
	}
	return (bytes);
}

int	ft_print_numbers(char selector, va_list *varg)
{
	int				varg_int;
	unsigned int	varg_unsigned;
	char			*varg_str;
	int				bytes;

	bytes = 0;
	if (selector == 'd' || selector == 'i')
	{
		varg_int = va_arg(*varg, int);
		varg_str = ft_itoa(varg_int);
		ft_putstr(varg_str);
		bytes = ft_strlen(varg_str);
		free(varg_str);
	}
	else if (selector == 'u')
	{
		varg_unsigned = va_arg(*varg, unsigned int);
		varg_str = ft_utoa(varg_unsigned);
		ft_putstr(varg_str);
		bytes = ft_strlen(varg_str);
		free(varg_str);
	}
	return (bytes);
}

int	ft_print_hexadecimal(char selector, va_list *varg)
{
	int				bytes;
	char			*varg_str;
	unsigned int	varg_unsigned;

	bytes = 0;
	if (selector == 'x')
	{
		varg_unsigned = va_arg(*varg, unsigned int);
		varg_str = ft_utoa_base(varg_unsigned, 16, "0123456789abcdef");
		ft_putstr(varg_str);
		bytes = ft_strlen(varg_str);
		free(varg_str);
	}
	else if (selector == 'X')
	{
		varg_unsigned = va_arg(*varg, unsigned int);
		varg_str = ft_utoa_base(varg_unsigned, 16, "0123456789ABCDEF");
		ft_putstr(varg_str);
		bytes = ft_strlen(varg_str);
		free(varg_str);
	}
	return (bytes);
}

int	ft_print_pointer(char selector, va_list *varg)
{
	int		bytes;
	void	*varg_void;
	char	*varg_str;
	char	*base;

	base = "0123456789abcdef";
	bytes = 0;
	if (selector == 'p')
	{
		varg_void = va_arg(*varg, void *);
		if (!varg_void)
			return (ft_putstr("(nil)"), 5);
		else
		{
			varg_str = ft_utoa_base((unsigned long int)varg_void, 16, base);
			ft_putstr("0x");
			ft_putstr(varg_str);
			bytes = ft_strlen(varg_str) + 2;
			free(varg_str);
		}
	}
	return (bytes);
}
