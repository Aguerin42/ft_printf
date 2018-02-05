/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 15:21:33 by aguerin           #+#    #+#             */
/*   Updated: 2018/02/02 15:51:58 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int	ft_putwstr(wchar_t *str)
{
	int	cmp;

	if (!str)
		return (-1);
	cmp = 0;
	while (*str)
		cmp += ft_putwchar(*(str++));
	return (cmp);
}
