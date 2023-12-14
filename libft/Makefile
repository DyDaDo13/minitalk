# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dydado13 <dydado13@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/11 10:48:37 by dylmarti          #+#    #+#              #
#    Updated: 2023/12/14 19:42:26 by dydado13         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a    

FUNC			= libftsources/ft_atoi.c \
libftsources/ft_itoa.c \
libftsources/ft_bzero.c \
libftsources/ft_split.c \
libftsources/ft_strlen.c \
libftsources/ft_calloc.c \
libftsources/ft_lstnew.c \
libftsources/ft_strchr.c \
libftsources/ft_memchr.c \
libftsources/ft_strdup.c \
libftsources/ft_substr.c \
libftsources/ft_memcmp.c \
libftsources/ft_memcpy.c \
libftsources/ft_memset.c \
libftsources/ft_strmapi.c \
libftsources/ft_lstiter.c \
libftsources/ft_strncmp.c \
libftsources/ft_isalnum.c \
libftsources/ft_lstlast.c \
libftsources/ft_strnstr.c \
libftsources/ft_isalpha.c \
libftsources/ft_strrchr.c \
libftsources/ft_isascii.c \
libftsources/ft_lstsize.c \
libftsources/ft_strtrim.c \
libftsources/ft_isdigit.c \
libftsources/ft_isprint.c \
libftsources/ft_tolower.c \
libftsources/ft_strjoin.c \
libftsources/ft_toupper.c \
libftsources/ft_memmove.c \
libftsources/ft_strlcat.c \
libftsources/ft_strlcpy.c \
libftsources/ft_striteri.c \
libftsources/ft_lstclear.c \
libftsources/ft_lstdelone.c \
libftsources/ft_putnbr_fd.c \
libftsources/ft_putstr_fd.c \
libftsources/ft_putendl_fd.c \
libftsources/ft_putchar_fd.c \
libftsources/ft_lstadd_back.c \
printfsources/ft_printf.c \
printfsources/functions.c \
printfsources/functions2.c \
get_next_line/get_next_line.c \
libftsources/ft_lstadd_front.c \
get_next_line/get_next_line_utils.c \
sourcesplus/ft_atol.c \
sourcesplus/sort_list.c \

OBJS			= $(FUNC:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

all:	$(NAME)

$(NAME):		$(OBJS)
	@ar rcs $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean:		clean
	@$(RM) $(NAME)

re:			fclean all

.PHONY:			all clean fclean re bonus
