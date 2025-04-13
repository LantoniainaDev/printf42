NAME	=	libftprintf.a

CC		=	cc

LIBFT	=	./libft

CFLAG	=	-Wall -Wextra -Werror

SRC		=	ft_printf.c ft_convert.c

OBJ		=	$(SRC:.c=.o)

%o		:	%.c
	@$(CC) $(CFLAG) -I $(LIBFT)/libft -L $(LIBFT) -c $< -o $@ 

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