#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymushet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/19 14:22:27 by ymushet           #+#    #+#              #
#    Updated: 2017/06/01 13:59:37 by ymushet          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC = ft_atoi.c ft_begin.c ft_bzero.c ft_end.c ft_is_minint.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_isspace.c ft_itoa.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_memalloc.c ft_memccpy.c ft_memchr.c \
ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_ndigits.c ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c \
ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_sign.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c \
ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c \
ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strrev.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_swap.c ft_tolower.c ft_toupper.c ft_strsplit.c \
get_next_line.c ft_realloc.c func.c ft_printf.c modifier.c parsing.c presicion.c print.c printtext.c unsigned.c width.c undefined.c signed.c wchar.c \
unsigned2.c textwidth.c malloc_double_str.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror -I.

.PHONY: all fclean clean re

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo libft compiled

%.o:./%.c
	@gcc $(CFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJ)
	@echo libft object cleaned

fclean: clean
	@rm -f $(NAME)
	@libft fcleaned

re: fclean all