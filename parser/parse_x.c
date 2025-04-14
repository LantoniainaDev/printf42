/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 17:33:04 by eramanit          #+#    #+#             */
/*   Updated: 2025/04/14 03:51:28 by eramanit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static unsigned int	get_len(unsigned int l)
{
	unsigned int	i;
	unsigned int	clone;

	clone = 16;
	i = 0;
	while (l / clone >= 1 && ((unsigned int) -1) / 16 >= clone)
	{
		clone *= 16;
		i++;
	}
	if (!(((unsigned int) -1) / 16 >= clone))
		i++;
	return (i);
}

char	*parse_x(va_list args)
{
	char			*res;
	unsigned int	l;
	unsigned int	i;
	char			*base;

	base = "0123456789abcdef";
	l = (unsigned int)va_arg(args, unsigned int);
	i = get_len(l);
	res = ft_calloc(i + 2, 1);
	if (!res)
		return (res);
	while ((unsigned int)l >= 16)
	{
		res[i] = base[l % 16];
		i--;
		l = l / 16;
	}
	if (i == 0)
		res[i] = base[l % 16];
	return (res);
}
