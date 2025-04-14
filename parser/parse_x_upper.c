/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_x_upper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 22:47:56 by eramanit          #+#    #+#             */
/*   Updated: 2025/04/13 22:53:01 by eramanit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*parse_x_upper(va_list args)
{
	char	*res;
	int		i;

	i = 0;
	res = parse_x(args);
	while (res[i])
	{
		res[i] = ft_toupper(res[i]);
		i++;
	}
	return (res);
}
