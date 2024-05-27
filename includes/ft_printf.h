/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcohen <jcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 18:54:55 by jcohen            #+#    #+#             */
/*   Updated: 2024/05/27 17:09:59 by jcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FR_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_putstr(const char *str);
int		ft_strlen(const char *str);
void	ft_putchar(char c);
int		ft_conversion_p(void *pointer);
int		ft_conversion_d(int nb);
int		ft_conversion_i(int integer);
int		ft_conversion_u(unsigned int u_integer);
int		ft_conversion_hex(int hexa, bool type);
char	ft_find_condition(const char *str);

int		ft_printf(const char *str, ...);

#endif