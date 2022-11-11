/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoussef <byoussef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:52:21 by byoussef          #+#    #+#             */
/*   Updated: 2022/11/08 18:32:35 by byoussef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf(const char *types, ...)
{
	int		arg_nums;
	va_list	args;
	int		i;
	int	x;

	arg_nums = ft_strlen(types);
	va_start(args, types);
	i = 0;
	while (i <= arg_nums)
	{
		if (*types == '%' && *(types + 1) == 'd')
		{
		x = va_arg(args, int);
		ft_putnbr(x);
		types++;
		}
		
		if (*types == '%' && *(types + 1) == 'c')
		{
			
		int x = va_arg(args, int);
		ft_putchar(x);
		types++;
		}
		
		else
		ft_putchar(types[i]);
		i++;

	}
	return (arg_nums);
	va_end(args);
	
}

int	main()
{
	printf("%d\n", ft_printf("%d\n", 20));
}