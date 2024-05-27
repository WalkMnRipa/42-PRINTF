/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcohen <jcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 21:35:55 by jcohen            #+#    #+#             */
/*   Updated: 2024/05/27 16:23:40 by jcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_conversion_c(char character)
{
	ft_putchar(character);
	return (1);
}

int	ft_conversion_s(char *str)
{
	int	nb_character;

	nb_character = 0;
	while (str[nb_character] != '\0')
	{
		ft_putchar(str[nb_character]);
		nb_character++;
	}
	return (nb_character);
}

int	ft_conversion_p(void *pointer)
{
	unsigned int	ptr;

	ptr = (unsigned int)pointer;
}

int	ft_conversion_d(int nb)
{
}

int	ft_conversion_i(int integer)
{
}

int	ft_conversion_u(unsigned int u_integer)
{
}

int	ft_conversion_x(int hexa)
{
}

int	ft_conversion_X(int hexa)
{
}

int	ft_conversion_percentage(void)
{
	ft_putchar('%');
	return (1);
}