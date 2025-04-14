/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 07:52:13 by eramanit          #+#    #+#             */
/*   Updated: 2025/04/13 22:50:38 by eramanit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_convert(const char *s, va_list args);
char	*parse_c(va_list args);
char	*parse_s(va_list args);
char	*parse_p(va_list args);
char	*parse_d(va_list args);
char	*parse_i(va_list args);
char	*parse_u(va_list args);
char	*parse_x(va_list args);
char	*parse_x_upper(va_list args);

#endif