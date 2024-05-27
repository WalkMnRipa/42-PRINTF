/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcohen <jcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 21:36:53 by jcohen            #+#    #+#             */
/*   Updated: 2024/05/27 18:40:28 by jcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putstr(const char *str)
{
	int	len_str;

	len_str = 0;
	while (str[len_str] != '\0')
	{
		ft_putchar(str[len_str]);
		len_str++;
	}
	return (len_str);
}
int	ft_strlen(const char *str)
{
	int	len_str;

	len_str = 0;
	while (str[len_str] != '\0')
		len_str++;
	return (len_str);
}
int	ft_putnbr(int n)
{
	int	size;

	size = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		size++;
	}
	if (n >= 10)
		size += ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
	size++;
	return (size);
}
int	ft_make_conversion(char type, va_list args)
{
	if (type == 'c')
		return (ft_conversion_char(args));
	if (type == 's')
		return (ft_conversion_string(args));
	if (type == 'p')
		return (ft_conversion_pointer(args));
	if (type == 'd' || type == 'i')
		return (ft_conversion_decimal_integer(args));
	if (type == 'u')
		return (ft_conversion_uinteger(args));
	if (type == 'x')
		return (ft_conversion_hexa(args, false));
	if (type == 'X')
		return (ft_conversion_hexa(args, true));
	if (type == '%')
		return (ft_conversion_percentage());
	return (0);
}
