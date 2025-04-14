/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:56:07 by eramanit          #+#    #+#             */
/*   Updated: 2025/04/14 00:32:30 by eramanit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_count_power(unsigned int n)
{
	unsigned int	n2;
	unsigned int	d;

	d = 0;
	n2 = n;
	while (n2 >= 10)
	{
		n2 /= 10;
		d++;
	}
	return (d);
}

static char	*ft_utoa(unsigned int n)
{
	char	*s;
	int		d;

	d = ft_count_power(n);
	s = ft_calloc(d + 2, sizeof(char));
	if (!s)
		return (s);
	while (d >= 0)
	{
		s[d] = (char)(n % 10 + '0');
		n /= 10;
		d--;
	}
	return (s);
}

char	*parse_u(va_list args)
{
	char				*res;
	unsigned int		d;

	d = (unsigned int)va_arg(args, int);
	res = ft_utoa(d);
	return (res);
}
