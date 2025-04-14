/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 12:07:57 by eramanit          #+#    #+#             */
/*   Updated: 2025/04/14 04:04:13 by eramanit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	get_printed(char *res, char type)
{
	if (type == 'c')
		return (1);
	return (ft_strlen(res));
}

char	*get_parsed_fmt(const char *s, va_list args)
{
	char	*res;

	if (s[1] == 'c')
		res = parse_c(args);
	else if (s[1] == 's')
		res = parse_s(args);
	else if (s[1] == 'p')
		res = parse_p(args);
	else if (s[1] == 'd' || s[1] == 'i')
		res = parse_d(args);
	else if (s[1] == 'u')
		res = parse_u(args);
	else if (s[1] == 'x')
		res = parse_x(args);
	else if (s[1] == 'X')
		res = parse_x_upper(args);
	else if (s[1] == '%')
		res = ft_strdup("%");
	else
		res = ft_substr(s, 0, 2);
	return (res);
}

int	ft_convert(const char *s, va_list args)
{
	char	*res;
	int		len;

	len = 0;
	res = get_parsed_fmt(s, args);
	if (!res)
		return (len);
	ft_putstr_fd(res, 1);
	len = get_printed(res, s[1]);
	free(res);
	return (len);
}
