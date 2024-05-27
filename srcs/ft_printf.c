/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcohen <jcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 18:54:50 by jcohen            #+#    #+#             */
/*   Updated: 2024/05/27 16:23:58 by jcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	arg_ptr;
	int		len_str;
	char	condition;

	// Parcours de la chaine str, putchar chaque caractere
	// si caractere == %
	// ft_putstr --> return (un int == len);
	va_start(arg_ptr, str);
	condition = ft_found_condition(str);
	// if (condition == 'c')
	// 	ft_conversion_c(va_arg(arg_ptr, char))
	// len_str += ft_conversion_..();
	// printf --> return le nombre caracteres imprime
}
