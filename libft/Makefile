CC = gcc
CFLAGS = -g -Wall -Wextra -Werror
AR = ar rcs

NAME = test_libck.a
MAIN = test_main
EXEC = test_exec

SRCS = $(wildcard ft*.c ck*.c my*.c)
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
