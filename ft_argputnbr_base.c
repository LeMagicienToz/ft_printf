/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argputnbr_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:59:53 by muteza            #+#    #+#             */
/*   Updated: 2021/11/08 09:27:25 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_argputnbr_base(unsigned int n, va_list args)
{
	char	*base;
	char	c;

	base = "0123456789abcdef";
	if (n > 16)
	{
		ft_argputnbr((n / 16), args);
		ft_argputnbr((n % 16), args);
	}
	if (n < 17)
	{
		c = base[n];
		ft_putchar(c);
	}
}
