NAME	=	libftprintf.a

CC		=	cc

LIBFT	=	./libft

CFLAG	=	-Wall -Wextra -Werror

SRC		=	ft_printf.c

OBJ		=	$(SRC:.c=.o)

%o		:	%.c
	$(CC) $(CFLAG) -I $(LIBFT)/libft -L $(LIBFT) -c $< -o $@ 

all		:	$(NAME)

$(NAME)	: $(OBJ)
	make -C $(LIBFT)
	cp libft/libft.a $@
	ar -rsc $@ $(OBJ)

clean	:
	make clean -C $(LIBFT)
	rm -rf $(OBJ)

fclean	:	clean
	make fclean -C $(LIBFT)
	rm -rf $(NAME)

re		:	fclean all

.PHONY	: $(NAME) fclean clean re