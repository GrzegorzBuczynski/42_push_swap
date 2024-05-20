# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/10 17:48:12 by gbuczyns          #+#    #+#              #
#    Updated: 2024/05/20 20:15:48 by gbuczyns         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CFLAG = -Wall -Wextra -Werror

NAME = libft.a

SRC = ft_atoi.c \
	  ft_bzero.c \
	  ft_calloc.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_itoa.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_putchar_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_putstr_fd.c \
	  ft_strchr.c \
	  ft_strdup.c \
	  ft_striteri.c \
	  ft_strjoin.c \
	  ft_strlcat.c \
	  ft_strlcpy.c \
	  ft_substr.c \
	  ft_strlen.c \
	  ft_strmapi.c \
	  ft_strnstr.c \
	  ft_strrchr.c \
	  ft_strtrim.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_strncmp.c \
	  ft_split.c \

SRCB = ft_lstnew.c \
	   ft_lstadd_front.c \
	   ft_lstsize.c \
	   ft_lstlast.c \
	   ft_lstadd_back.c \
	   ft_lstdelone.c \
	   ft_lstclear.c \
	   ft_lstiter.c \
	   ft_lstmap.c \
	   
SRCD = ft_printf.c \
	   ft_print_digit.c \
	   ft_print_hexl.c \
	   ft_print_hexu.c \
	   ft_print_pointer.c \
	   ft_print_string.c \
	   ft_print_unsigned.c \

OBJ = $(SRC:.c=.o)
OBJB = $(SRCB:.c=.o)
OBJD = $(SRCD:.c=.o)

$(NAME): $(OBJ) $(OBJB) $(OBJD)
	@ar rc $(NAME) $(OBJ) $(OBJB) $(OBJD)

all: $(NAME)

libft: $(OBJ)
	@ar rc $(NAME) $(OBJ)

bonus: $(OBJB)
	@ar rc $(NAME) $(OBJB)

clean:
	@rm -f $(OBJ)
	@rm -f $(OBJB)
	@rm -f $(OBJD)
	@echo "OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all

.PHONY: all, clean, fclean, re
