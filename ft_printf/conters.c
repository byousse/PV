/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conters.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoussef <byoussef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:40:05 by byoussef          #+#    #+#             */
/*   Updated: 2022/11/10 21:08:14 by byoussef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_XER(unsigned int X)
{
	unsigned int 	temp;
	unsigned int 	i;
	unsigned int 	j;
	int				x = 0;
	
	temp = X;
	while(temp != '\0')
	{
		temp = temp/16;
		i++;
	}
	char *ptr;
	ptr = malloc((i + 1)* sizeof(char));
	if(!ptr)
		return;
	j = 0;
	while((i - j) > 0)
	{
		if ((X % 16) >= 0 && (X % 16) <= 9)
		ptr[i - j - 1] = (X % 16) + '0';
		if ((X % 16) >= 10 && (X % 16) <= 15)
		ptr[i - j - 1] = (X % 16) + 55;
		X = X / 16;
		j++;
		x++;
	}
	ptr[i] = '\0';
	ft_putstr(ptr);
	return(x);
}

int	ft_xER(unsigned int X)
{
	unsigned int 	temp;
	unsigned int 	i;
	unsigned int 	j;
	int x = 0;
	
	temp = X;
	while(temp != '\0')
	{
		temp = temp/16;
		i++;
	}
	char *ptr;
	ptr = malloc((i + 1)* sizeof(char));
	if(!ptr)
		return;
	j = 0;
	while((i - j) > 0)
	{
		if ((X % 16) >= 0 && (X % 16) <= 9)
		ptr[i - j - 1] = (X % 16) + '0';
		if ((X % 16) >= 10 && (X % 16) <= 15)
		ptr[i - j - 1] = (X % 16) + 87;
		X = X / 16;
		j++;
		x++;
	}
	ptr[i] = '\0';
	ft_putstr(ptr);
	return(x);
}

int	ft_pER(unsigned long X)
{
	unsigned long 	temp;
	unsigned long 	i;
	unsigned long 	j;
	int x = 0;
	
	temp = X;
	
	while(temp != '\0')
	{
		temp = temp/16;
		i++;
	}
	char *ptr;
	ptr = malloc((i + 1)* sizeof(char));
	if(!ptr)
		return;
	j = 0;
	while((i - j) > 0)
	{
		if ((X % 16) >= 0 && (X % 16) <= 9)
		ptr[i - j - 1] = (X % 16) + '0';
		if ((X % 16) >= 10 && (X % 16) <= 15)
		ptr[i - j - 1] = (X % 16) + 87;
		X = X / 16;
		j++;
		x++;
	}
	ptr[i] = '\0';
	write(1, "0x", 2);
	ft_putstr(ptr);
	return(x);
}

void	ft_u(unsigned int n)
{
	long	nb;
	int x = 0;

	nb = n;
	if (nb < 10)
		ft_putchar(nb + 48);
	else
	{
		ft_u(nb / 10);
		ft_u(nb % 10);
	}
}