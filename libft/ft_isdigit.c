/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:34:00 by eramanit          #+#    #+#             */
/*   Updated: 2025/03/24 08:41:20 by eramanit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	int	true;

	true = 2048;
	if (c <= '9' && c >= '0')
	{
		return (true);
	}
	else
		return (0);
}
