/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoussef <byoussef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 14:56:00 by byoussef          #+#    #+#             */
/*   Updated: 2022/11/06 15:33:11 by byoussef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	ls1;
	size_t	ls2;
	int		i;

	if (!s1)
		s1 = ft_strdup("");
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	p = malloc((ls1 + ls2 + 1) * sizeof(char));
	if (!p)
		return (0);
	i = -1;
	while ((size_t)++i < ls1)
		p[i] = s1[i];
	i = -1;
	while ((size_t)++i < ls2)
		p[ls1 + i] = s2[i];
	p[ls1 + ls2] = '\0';
	free((char *)s1);
	return (p);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[i] == c)
			return ((char *)s + i + 1);
		i++;
	}
	return (0);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*p;

	i = ft_strlen(s1);
	p = malloc((i + 1) * sizeof(char));
	if (!p)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)s + i) = '\0';
		i++;
	}
}
