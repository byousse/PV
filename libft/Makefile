# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: byoussef <byoussef@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 18:36:04 by byoussef          #+#    #+#              #
#    Updated: 2022/10/30 11:33:42 by byoussef         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
FLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f

F  =      ft_memset ft_bzero ft_memcpy \
		 ft_memmove ft_memchr ft_memcmp \
		 ft_strlen ft_strlcpy ft_strlcat \
		 ft_strchr ft_strrchr ft_strnstr \
		 ft_strncmp ft_isalnum ft_isascii \
		 ft_atoi ft_isalpha ft_isdigit \
		 ft_isprint ft_toupper ft_tolower \
		 ft_calloc ft_strdup ft_substr \
		 ft_strjoin ft_strtrim ft_putchar_fd \
		 ft_itoa ft_split ft_putstr_fd \
		 ft_putendl_fd ft_putnbr_fd ft_striteri \
		 ft_strmapi \

FO = $(F:=.o)
all: $(NAME)

$(NAME): $(FO)
	$(AR) $(NAME) $(FO)

%.o: %.c libft.h
	$(CC) -c $(FLAGS)  $<

clean:
	$(RM) $(FO)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re
