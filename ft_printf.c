/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:43:43 by muteza            #+#    #+#             */
/*   Updated: 2021/11/09 16:52:05 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *num, ...)
{
	int		count;
	va_list	argument;

	count = 0;
	va_start(argument, num);
	while (num[count] != '\0')
	{
		if (num[count] == '%' && ft_check_idflags(count, (char *)num) == 1)
		{
			count++;
			ft_checkflags((char **)&num, argument, count);
			count++;
		}
		else if (num[count] != '%')
		{
			ft_putchar(num[count]);
			count++;
		}
		else
			count++;
	}
	count = ft_count((char *)num);
	va_end(argument);
	return (count - 1);
}

int	main(void)
{
	printf("%d\n", printf(" %c %d ", 'b', 0, '1'));
	printf("%d\n", ft_printf(" %c %d ", 'b', 0, '1'));
}
