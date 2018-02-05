/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putxwchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 00:17:03 by aguerin           #+#    #+#             */
/*   Updated: 2018/02/02 15:52:34 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_putxwchar() affiche x fois le caractère c.
*/

#include "ft_printf.h"

int	ft_putxwchar(wchar_t c, int x)
{
	int	i;

	i = -1;
	while (++i < x)
		ft_putwchar(c);
	return (i);
}
