/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byoussef <byoussef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:22:14 by byoussef          #+#    #+#             */
/*   Updated: 2022/11/06 18:36:42 by byoussef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static int	ft_check_nl_eof(char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == '\n' || *str == EOF)
			return (1);
		str++;
	}
	return (0);
}

static size_t	ft_len(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != '\n' && s[i] != EOF)
		i++;
	if (s[i] == '\n')
		i++;
	return (i);
}

static	char	*ft_new_strings(char *str)
{
	char	*new_stock;
	size_t	len;
	size_t	i;

	len = ft_len(str);
	new_stock = malloc((len + 1) * sizeof(char));
	if (!new_stock)
		return (0);
	i = 0;
	while (i < len)
	{
		new_stock[i] = str[i];
		i++;
	}
	new_stock[i] = '\0';
	free(str);
	str = NULL;
	return (new_stock);
}

static	char	*ft_new_str(int fd, char *stock, char **keeper, ssize_t size)
{
	char	*str;

	str = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!str)
		return (0);
	while (size > 0)
	{
		ft_bzero(str, BUFFER_SIZE + 1);
		if (ft_check_nl_eof(stock))
		{
			free(str);
			*keeper = ft_strdup(ft_strchr(stock, '\n'));
			return (ft_new_strings(stock));
		}
		size = read(fd, str, BUFFER_SIZE);
		if (size < 0)
		{
			free(str);
			return (0);
		}
		stock = ft_strjoin(stock, str);
	}
	free(str);
	return (stock);
}

char	*get_next_line(int fd)
{
	static char		*keeper[OPEN_MAX];
	char			*stock;
	ssize_t			size;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	stock = NULL;
	if (keeper[fd])
	{
		stock = ft_strdup(keeper[fd]);
		free (keeper[fd]);
		keeper[fd] = NULL;
	}
	size = 1;
	stock = ft_new_str(fd, stock, &keeper[fd], size);
	if (stock && stock[0] != '\0')
		return (stock);
	free(stock);
	return (0);
}
