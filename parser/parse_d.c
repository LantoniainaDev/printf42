/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:55:23 by eramanit          #+#    #+#             */
/*   Updated: 2025/04/13 17:06:03 by eramanit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*parse_d(va_list args)
{
	char	*res;
	int		d;

	d = (int)va_arg(args, int);
	res = ft_itoa(d);
	return (res);
}
