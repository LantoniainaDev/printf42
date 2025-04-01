/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 11:42:49 by eramanit          #+#    #+#             */
/*   Updated: 2025/04/01 11:45:19 by eramanit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	ft_printf(const char *format, ...)
{
	ft_putstr_fd((char *)format, 1);
	return (ft_strlen(format));
}
