/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:20:59 by muteza            #+#    #+#             */
/*   Updated: 2021/11/09 17:16:58 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *num, ...);
int		ft_checkflags(char **tab_arg, va_list args, int count);
int		ft_check_space(char *str, int k);
int		ft_check_idflags(int count, char *str);
int		ft_count(char *str);

void	ft_argputchar(va_list args);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_argputstr(va_list args);
void	ft_argputnbr(long n, va_list args);
//void	ft_argputhexa(va_list args);
void	ft_argputnbr_base(unsigned int n, va_list args);

char	ft_strlen(char *str);
char	*ft_strdup(const char *s1);
#endif