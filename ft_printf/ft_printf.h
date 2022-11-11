/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoussef <byoussef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:13:28 by byoussef          #+#    #+#             */
/*   Updated: 2022/11/10 21:05:36 by byoussef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <limits.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <stdlib.h>
# include <stddef.h>

size_t	ft_strlen(const char *str);
int		ft_printf(const char *types, ...);
char	*ft_strchr(const char *s, int c);
void	ft_putnbr(int n);
void	ft_putchar(char c);
void	ft_putstr(char *s);
int		ft_XER(unsigned int X);
int		ft_xER(unsigned int X);
int		ft_pER(unsigned long X);
void	ft_u(unsigned int n);

#endif