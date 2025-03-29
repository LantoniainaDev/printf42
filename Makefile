NAME	=	libftprintf.a

CC		=	cc

CFLAG	=	-Wall -Wextra -Werror

SRC		=	ft_printf.c

OBJ		=	$(SRC:.c=.o)

%.c		:	%.o
	$(CC) $(CFLAG) $< -o $@

all		:	$(NAME)

clean	:
	rm -rf $(OBJ)

fclean	:	clean
	rm -rf $(NAME)

re		:	fclean all

.PHONY	: $(NAME) fclean clean re