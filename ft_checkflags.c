/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkflags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:18:33 by muteza            #+#    #+#             */
/*   Updated: 2021/11/09 16:26:21 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkflags(char **tab_arg, va_list args, int count)
{
	long	n;

	n = 0;
	if (*(tab_arg[0] + count) == 'c')
		ft_argputchar(args, count);
	if (*(tab_arg[0] + count) == 's')
		ft_argputstr(args);
	//if (*(tab_arg[0] + count) == 'p')
//		ft_argputhexa(args);
	if ((*(tab_arg[0] + count) == 'd') || (*(tab_arg[0] + count) == 'i'))
	{
		n = va_arg(args, long);
		ft_argputnbr(n, args);
	}
	if (*(tab_arg[0] + count) == 'u')
	{
		n = va_arg(args, unsigned int);
		ft_argputnbr(n, args);
	}
	if (*(tab_arg[0] + count) == 'x')
	{
		n = va_arg(args, unsigned int);
		ft_argputnbr_base(n, args);
	}
}

int	ft_check_space(char *str, int k)
{
	int	i;

	i = ft_strlen(str);
	while (str[k] == ' ')
	{
		ft_putchar(' ');
		k++;
	}
	return (k);
}

int	ft_check_idflags(int count, char *str)
{
	int		i;
	char	*flags;

	flags = "scdiux";
	i = 0;
	count++;
	while (flags[i] != str[count] && flags[i])
		i++;
	if (flags[i] == str[count])
		return (1);
	else
		return (0);
}
