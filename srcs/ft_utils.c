/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcohen <jcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 21:36:53 by jcohen            #+#    #+#             */
/*   Updated: 2024/05/27 16:29:54 by jcohen           ###   ########.fr       */
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

char	ft_find_condition(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			return (str[i + 1]);
		i++;
	}
	return ('F');
}