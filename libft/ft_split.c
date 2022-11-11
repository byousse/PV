/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoussef <byoussef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:44:06 by byoussef          #+#    #+#             */
/*   Updated: 2022/10/28 16:12:29 by byoussef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_checkalc(char **ptr, char const *s, char c)
{
	int	cont;
	int	i;

	cont = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			cont++;
		while (s[i] != c && s[i] != '\0')
			i++;
		while (s[i] == c && s[i] != '\0' )
			i++;
	}
	ptr = malloc((cont + 1) * sizeof(char *));
	if (!ptr)
	{
		free(ptr);
		return (0);
	}
	return (ptr);
}

static int	ft_lens(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	i++;
	return (i);
}

static char	*ft_wordcp(const char *s, char c)
{
	char	*str;
	int		len;

	len = ft_lens(s, c);
	str = malloc((len +1) * sizeof(char));
	if (!str)
	{
		free(str);
		return (0);
	}
	ft_memcpy(str, s, len);
	str[len] = '\0';
	return (str);
}

char	**ft_free(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**ptr;

	if (!s)
		return (0);
	ptr = NULL;
	ptr = ft_checkalc(ptr, s, c);
	if (!ptr)
		return (0);
	i = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			ptr[i++] = ft_wordcp(s, c);
			if (!ptr[i - 1])
				return ((ft_free(ptr, i - 1)));
		}
		while (*s != c && *s != '\0')
			s++;
		while (*s == c && *s != '\0' )
			s++;
	}
	ptr[i] = 0;
	return (ptr);
}
