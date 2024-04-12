/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pausanch <pausanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:23:52 by pausanch          #+#    #+#             */
/*   Updated: 2023/09/27 11:03:20 by pausanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_string(char *str);
int	ft_unsigned(unsigned int nb);
int	ft_pointer(unsigned long long ptr);
int	ft_hexa(unsigned long long nb, char c);
int	ft_decimal(int nb);
int	ft_printf(char const *content, ...);

#endif
