CC = gcc
CFLAGS = -Wall -Wextra -Werror
SOURCE = main.c process_file.c
OBJ = $(SOURCE:.c=.o)
NAME = bsq

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all