/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:53:58 by eramanit          #+#    #+#             */
/*   Updated: 2025/04/14 01:36:52 by eramanit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*parse_s(va_list args)
{
	char	*s;
	char	*res;

	res = NULL;
	s = (char *)va_arg(args, char *);
	if (s)
	{
		res = ft_strdup(s);
		return (res);
	}
	else
		return (ft_strdup("(null)"));
}
