NAME	=	libftprintf.a

CC		=	cc

LIBFT	=	./libft

CFLAG	=	-Wall -Wextra -Werror

SRC		=	ft_printf.c

OBJ		=	$(SRC:.c=.o)

%.c		:	%.o
	$(CC) $(CFLAG) $< -o $@

all		:	$(NAME)

$(NAME)	:
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