# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eramanit <eramanit@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/01 19:07:27 by eramanit          #+#    #+#              #
#    Updated: 2025/05/01 19:07:29 by eramanit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

CC		=	cc

LIBFT	=	./libft

CFLAG	=	-Wall -Wextra -Werror

PARSER	=	parse_c.c parse_s.c parse_p.c \
			parse_d.c parse_i.c parse_u.c \
			parse_x.c parse_x_upper.c

SRC		=	ft_printf.c ft_convert.c \
			$(addprefix parser/, $(PARSER))

OBJ		=	$(SRC:.c=.o)

%.o		:	%.c
	@$(CC) $(CFLAG) -I $(LIBFT)/libft -c $< -o $@ 

all		:	$(NAME)

$(NAME)	: $(OBJ)
	@make -C $(LIBFT)
	@cp libft/libft.a $@
	@ar -rsc $@ $(OBJ)
	@echo "\033[33mft_printf :: compiled\033[00m"

clean	:
	@make clean -C $(LIBFT)
	@rm -rf $(OBJ)

fclean	:	clean
	@make fclean -C $(LIBFT)
	@rm -rf $(NAME)
	clear

re		:	fclean all

.PHONY	: $(NAME) fclean clean re