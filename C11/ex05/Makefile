CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = do-op

all :
	$(CC) $(CFLAGS) -o $(NAME) do-op.c ft_calc.c print.c

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
