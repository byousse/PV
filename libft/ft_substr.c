/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoussef <byoussef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:23:28 by byoussef          #+#    #+#             */
/*   Updated: 2022/10/30 12:21:10 by byoussef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	length;

	if (!s)
		return (0);
	length = ft_strlen(s);
	if (start >= length)
		return (ft_calloc(1, sizeof(char)));
	if (length <= start + len)
	{
		len = length - start;
		sub = malloc((len + 1) * sizeof(char));
		if (!sub)
			return (0);
	}
	else
	{
		sub = malloc((len + 1) * sizeof(char));
		if (!sub)
			return (0);
	}
	ft_memcpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}
