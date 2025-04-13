/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 12:07:57 by eramanit          #+#    #+#             */
/*   Updated: 2025/04/13 13:16:01 by eramanit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert(const char *s, va_list args)
{
	char	*res;
	char	c;
	int		len;

	len = 0;
	if (s[1] == 'c')
	{
		res = ft_calloc(1 + 1, 1);
		c = (char)va_arg(args, int);
		*res = c;
	}
	else
	{
		res = ft_substr(s, 0, 2);
	}
	ft_putstr_fd(res, 1);
	len = ft_strlen(res);
	free(res);
	return (len);
}
