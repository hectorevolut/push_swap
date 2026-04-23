/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hecalder <hecalder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 21:03:04 by hecalder          #+#    #+#             */
/*   Updated: 2026/02/15 13:02:32 by hecalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

size_t	ft_strlen(const char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_count_digits(long n);
char	*ft_itoa(int n);
int		ft_count_digits_u(unsigned int n);
char	*ft_utoa(unsigned int n);
int		ft_print_select(char selector, va_list *varg);
int		ft_printf(const char *str, ...);
char	*ft_utoa_base(unsigned long int n, int base, char *tabla);
int		ft_print_char(char selector, va_list *varg);
int		ft_print_str(char selector, va_list *varg);
int		ft_print_numbers(char selector, va_list *varg);
int		ft_print_hexadecimal(char selector, va_list *varg);
int		ft_print_pointer(char selector, va_list *varg);

#endif
