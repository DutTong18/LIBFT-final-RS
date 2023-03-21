
NAME = libft.a

CC = gcc -Wall -Wextra -Werror

Objects = 

all: $(NAME)

clean:
	rm -f *.o

fclean:
	rm -f $(NAME)
