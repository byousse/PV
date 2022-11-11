/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoussef <byoussef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:30:45 by byoussef          #+#    #+#             */
/*   Updated: 2022/10/30 11:26:12 by byoussef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstl;
	size_t	srcl;
	size_t	c;

	srcl = ft_strlen(src);
	if (!dst && !dstsize)
		return (srcl);
	dstl = ft_strlen(dst);
	if (dstsize == 0 || dstl >= dstsize)
		return (srcl + dstsize);
	c = 0;
	while (src[c] != '\0' && c < dstsize - dstl - 1)
	{
		dst[dstl + c] = src[c];
		c++;
	}
	dst[dstl + c] = '\0';
	return (dstl + srcl);
}
