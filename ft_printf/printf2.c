/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoussef <byoussef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:02:00 by byoussef          #+#    #+#             */
/*   Updated: 2022/11/10 17:08:22 by byoussef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *string, ...)
{
	va_list str;
	va_start(str, string);
	
	int i = 1;
	while (*string != '\0')
	{
		if(*string == '%')
		{
		if (*(string + 1) == 'd' || *(string + 1) == 'i')
			ft_putnbr(va_arg(str, int));
		if (*(string + 1) == 'c')
			ft_putchar(va_arg(str, int));
		if (*(string + 1) == 's')
			ft_putstr(va_arg(str, char *));
		if (*(string + 1) == 'X')
			ft_XER(va_arg(str, unsigned int));
			if (*(string + 1) == 'u')
			ft_u(va_arg(str, unsigned int));
		if (*(string + 1) == 'p')
			ft_pER(va_arg(str, unsigned long));
		if (*(string + 1) == 'x')
			ft_xER(va_arg(str, unsigned int));
		if (*(string + 1) == '%')
			ft_putchar(*string);
		string++;
		}
		else
			ft_putchar(*string);
		string++;
		i++;
	}
	
	va_end(str);
	return (i);
}
int	main()
{
	
	char j[] = "salam";
	
	// printf("--__%%--__%d--__%c__%s--__%i--", 15, 'A',"salam", 0x12);
	// ft_printf("--__%%--__%d--__%c__%s--__%i--", 15, 'A',"salam", 0x12);
	int i;
	printf("%d",ft_printf("%u\n", -123));
	// printf("%u\n", -123);
}