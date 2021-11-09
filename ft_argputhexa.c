/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argputhexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:14:16 by muteza            #+#    #+#             */
/*   Updated: 2021/11/08 09:27:27 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_argputhexa(va_list args)
{
	char	*ptr;

	*ptr = (va_arg(args, void *));
	ft_putstr(&ptr);
}
