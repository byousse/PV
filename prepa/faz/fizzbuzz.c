/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoussef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 06:52:49 by byoussef          #+#    #+#             */
/*   Updated: 2022/08/12 07:02:35 by byoussef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_putnumber(int n)
{
	if(n >  9)
		ft_putnumber(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}
int main(void)
{
	int i;
	i = 1;
	while(i <= 100)
	{
		if(i % 3 == 0)
			write(1, "fizz", 4);
		else if(i % 5 == 0)
			write(1, "buzz", 4);
		else if(i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else
			ft_putnumber(i);
		write(1, "\n", 1);
		return(0);
	}
}


