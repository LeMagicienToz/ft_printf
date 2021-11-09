/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:49:15 by muteza            #+#    #+#             */
/*   Updated: 2021/11/09 17:17:43 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count(char *str)
{
	int	i;
	int	compteur;

	compteur = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			compteur++;
			i++;
		}
		i++;
	}
	return (0);
	//printf("%d", compteur);
}
