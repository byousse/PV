/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoussef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 06:46:33 by byoussef          #+#    #+#             */
/*   Updated: 2022/08/12 06:51:23 by byoussef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int ac, char **av)
{
	int i ;
	i = 0;
	if(ac == 2)
	{
		while((av[1][i] == ' ') || (av[1][i] == '\t'))
			i++;
				while(av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
				{
					write(1, &av[1][i], 1);
					i++;
				}
	}
	write(1, "\n", 1);
	return(0);
}
