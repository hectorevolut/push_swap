/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hectorevolut <hectorevolut@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:32:06 by hecalder          #+#    #+#             */
/*   Updated: 2025/11/27 23:16:41 by hectorevolu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_atoi.c											:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: hecalder <hecalder@student.42malaga.com>	+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2025/11/11 16:02:11 by hecalder		   #+#	  #+#			  */
/*	 Updated: 2025/11/11 16:02:47 by hecalder		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "stdlib.h"

static int	ft_isspace(char chr)
{
	if (chr == ' ' || chr == '\f' || chr == '\n' || chr == '\r')
		return (1);
	else if (chr == '\t' || chr == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	asigned;

	sign = 1;
	result = 0;
	asigned = 0;
	while (ft_isspace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str ++;
		asigned ++;
		if (asigned > 1)
			return (0);
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
