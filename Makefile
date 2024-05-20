# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/10 18:56:40 by gbuczyns          #+#    #+#              #
#    Updated: 2024/05/20 20:44:22 by gbuczyns         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap

# Directories 
LIBTFDIR	= ./include/libft
INC			= include/
SRC_DIR		= src/

# Compiler
CC			= cc
CFLAGS		= -Wall -Wextra -Werror

# Source Files
COMMANDS_DIR		= $(SRC_DIR)commands/push.c \
					= $(SRC_DIR)commands/rev_rotate.c \
					= $(SRC_DIR)commands/rotate.c \
					= $(SRC_DIR)commands/sort_stacks.c \
					= $(SRC_DIR)commands/sort_three.c \
					= $(SRC_DIR)commands/swap.c \
				
PUSH_SWAP_DIR		= $(SRC_DIR)push_swap/handle_errors.c \
					= $(SRC_DIR)push_swap/init_a_to_b.c \
					= $(SRC_DIR)push_swap/init_b_to_a.c \
					= $(SRC_DIR)push_swap/push_swap.c \
					= $(SRC_DIR)push_swap/split.c \
					= $(SRC_DIR)push_swap/stack_init.c \
					= $(SRC_DIR)push_swap/stack_utils.c \




LIBFTNAME= libft.a

SRC = push_swap.c /


OBJ= $(SRC:%.c=%.o)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): libft $(OBJ)
	ar rcs $(NAME) $(OBJ)

libft:
	@make -C $(LIBTFDIR)
	@cp $(LIBTFDIR)/$(LIBFTNAME) .
	@mv $(LIBFTNAME) $(NAME)

clean:
	rm -f *.o

cleanlibft:
	@make clean -C $(LIBTFDIR)

fclean: clean
	rm -f $(NAME)

fcleanlibft:
	@make fclean -C $(LIBTFDIR)

allclean: clean cleanlibft

allfclean: fclean fcleanlibft
	rm a.out

re: fclean fcleanlibft all

testl:
	nm libftprintf.a

test:
	cc ft_printf.c -L. -lftprintf

.PHONY: all libft clean cleanlibft fclean fcleanlibft allclean allfclean re test testl