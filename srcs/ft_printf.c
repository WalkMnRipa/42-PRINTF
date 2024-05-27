/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcohen <jcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 18:54:50 by jcohen            #+#    #+#             */
/*   Updated: 2024/05/27 17:22:29 by jcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char format, ...)
{
	va_list	arg_ptr;
	int		size;
	int		i;
	char	condition;

	va_start(arg_ptr, format);
	size = 0;
	i = 0;
	// Parcours de la chaine str, putchar chaque caractere
	// si caractere == %
	// ft_putstr --> return (un int == len);
	// CHECK EVERY CONDITIONS !!
	// len_str += ft_conversion_..();
	// printf --> return le nombre caracteres imprime
	return (size);
}
