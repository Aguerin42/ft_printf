/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwbytlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 10:21:05 by aguerin           #+#    #+#             */
/*   Updated: 2018/02/02 15:46:36 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strwbytlen() renvoie la longueur de la chaîne 'str' en octet.
*/

#include "ft_printf.h"

int	ft_strwbytlen(wchar_t *str)
{
	int	i;

	if (!str)
		return (-1);
	i = 0;
	while (*str)
		i += ft_charwbytlen(*(str++));
	return (i);
}
