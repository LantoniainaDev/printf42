/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:54:39 by eramanit          #+#    #+#             */
/*   Updated: 2025/04/14 03:58:04 by eramanit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static size_t	get_len(size_t l)
{
	size_t	clone;
	int		i;

	clone = 16;
	i = 2;
	while (l / clone >= 1 && ((size_t) -1) / 16 > clone)
	{
		clone *= 16;
		i++;
	}
	if (((size_t) -1) / 16 < clone)
		i++;
	return (i);
}

char	*parse_p(va_list args)
{
	char	*res;
	size_t	l;
	int		i;
	char	*base;

	base = "0123456789abcdef";
	l = (size_t)va_arg(args, size_t);
	if (!l)
		return (ft_strdup("(nil)"));
	i = get_len(l);
	res = ft_calloc(i + 2, 1);
	if (!res)
		return (res);
	while (l >= 16)
	{
		res[i] = base[l % 16];
		i--;
		l = l / 16;
	}
	res[i] = base[l % 16];
	res[0] = '0';
	res[1] = 'x';
	return (res);
}
