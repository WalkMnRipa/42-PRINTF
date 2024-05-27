/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcohen <jcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 21:35:55 by jcohen            #+#    #+#             */
/*   Updated: 2024/05/27 18:52:10 by jcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_conversion_char(va_list args)
{
	char	c;

	c = va_arg(args, int);
	ft_putchar(c);
	return (1);
}

int	ft_conversion_string(va_list args)
{
	char	*str;
	int		nb_character;

	str = va_arg(args, char *);
	nb_character = 0;
	while (str[nb_character] != '\0')
	{
		ft_putchar(str[nb_character]);
		nb_character++;
	}
	return (nb_character);
}

int	ft_conversion_pointer(va_list args)
{
	unsigned int	nb;
	int				size;

	nb = va_arg(args, unsigned int);
}

int	ft_conversion_decimal_integer(va_list args)
{
	int	nb;

	nb = va_arg(args, int);
	return (ft_putnbr(nb));
}

int	ft_conversion_uinteger(va_list args)
{
}

int	ft_conversion_hexa(va_list args, bool choice)
{
}

int	ft_conversion_percentage(void)
{
	ft_putchar('%');
	return (1);
}