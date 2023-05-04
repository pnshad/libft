CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

NAME = libft.a
MAIN = mn_libtest
EXEC = ex_libtest

SRCS = $(wildcard ft*.c ck*.c)
OBJS = $(SRCS:.c=.o)
MAIN_OBJS = $(MAIN).o

all: $(NAME) $(EXEC)

$(NAME): $(OBJS)
	$(AR) $@ $^

$(EXEC): $(MAIN_OBJS) $(NAME)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
