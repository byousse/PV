/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoussef <byoussef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:42:06 by byoussef          #+#    #+#             */
/*   Updated: 2022/10/28 16:40:01 by byoussef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		len;
	int		i;
	long	nb;

	nb = n;
	len = ft_len(nb);
	p = malloc((len + 1) * sizeof(char));
	if (!p)
		return (0);
	i = 0;
	if (nb == 0)
		p[0] = '0';
	if (nb < 0)
	{
		p[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		p[len - (i++) - 1] = (nb % 10) + 48;
		nb /= 10;
	}
	p[len] = '\0';
	return (p);
}
