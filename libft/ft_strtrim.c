/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoussef <byoussef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:06:02 by byoussef          #+#    #+#             */
/*   Updated: 2022/10/31 14:36:06 by byoussef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	iback;
	size_t	total;

	i = 0;
	if (!s1)
		return (0);
	while (s1[i] != '\0' && ft_char_in_set(s1[i], set) == 1)
		i++;
	iback = ft_strlen(s1);
	while (iback - 1 >= i && ft_char_in_set(s1[iback - 1], set) == 1)
		iback--;
	total = iback - i;
	str = malloc(sizeof(char) * (total + 1));
	if (!str)
		return (0);
	ft_memcpy(str, s1 + i, total);
	str[total] = '\0';
	return (str);
}

int	main()
{
	char	s[] = " 2salam ";
	char	set[] = " 2";
	printf("%s\n", ft_strtrim(s, set));
}