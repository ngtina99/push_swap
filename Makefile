# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/27 11:54:50 by thuy-ngu          #+#    #+#              #
#    Updated: 2024/02/07 15:49:22 by thuy-ngu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

BONUS_NAME = checker

SRC =	./srcs/main.c ./srcs/manage_arg.c ./srcs/manage_stack.c \
		./srcs/manage_error.c ./srcs/stack_utils.c ./srcs/findvalue.c \
		./srcs/swap.c ./srcs/rotate.c ./srcs/revrotate.c \
		./srcs/revrotate_utils.c ./srcs/push.c ./srcs/sort_stack.c \
		./srcs/cost.c ./srcs/node_setup.c ./srcs/move_btoa.c \
		./srcs/moves_diff.c ./srcs/moves_same.c ./srcs/move_min.c

OBJ = $(SRC:.c=.o)

BONUS_SRC =	./bonus/main.c ./bonus/moves.c ./bonus/get_next_line.c \
			./bonus/get_next_line_utils.c ./bonus/filter_moves.c \
			./bonus/movestack.c ./bonus/movestack_utils.c \
			./bonus/manage_stack_bonus.c ./bonus/manage_arg_bonus.c \
			./bonus/manage_error_bonus.c
			

BONUS_OBJ = $(BONUS_SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror -g

RM = rm -f

LIBFT = ./libft/libft.a

INCLUDE_LIBFT = -I./libft/libft.h

INCLUDE_BONUS = -I./bonus/checker.h

all:	$(NAME)

$(LIBFT):
	$(MAKE) -C ./libft

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) $(INCLUDE_LIBFT) $(OBJ) $(LIBFT) -o $(NAME)

clean:
	$(MAKE) -C ./libft clean
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean:	clean
	$(RM) $(NAME) $(BONUS_NAME)
	$(MAKE) -C ./libft fclean

re:	fclean all

bonus:	$(BONUS_NAME)

$(BONUS_NAME): $(LIBFT) $(BONUS_OBJ)
	$(CC) $(CFLAGS) $(INCLUDE_LIBFT) $(INCLUDE_BONUS) $(BONUS_OBJ) $(LIBFT) -o $(BONUS_NAME)

.PHONY: all clean fclean re bonus