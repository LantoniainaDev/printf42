/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:53:12 by eramanit          #+#    #+#             */
/*   Updated: 2025/04/14 01:29:10 by eramanit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*parse_c(va_list args)
{
	char	*res;
	char	c;

	res = ft_calloc(1 + 1, 1);
	c = (char)va_arg(args, int);
	*res = c;
	if (!c)
		ft_putchar_fd(0, 1);
	return (res);
}
