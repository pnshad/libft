CC = gcc
CFLAGS = -g
AR = ar rcs

NAME = test_libck.a
MAIN = test_main
EXEC = test_exec

SRCS = $(wildcard ft*.c) $(wildcard ck*.c) $(wildcard my*.c)
FT_SRCS = $(filter ft%,$(SRCS))
CK_SRCS = $(filter ck%,$(SRCS))
MY_SRCS = $(filter my%,$(SRCS))

OBJS = $(SRCS:.c=.o)
FT_OBJS = $(FT_SRCS:.c=.o)
CK_OBJS = $(CK_SRCS:.c=.o)
MY_OBJS = $(MY_SRCS:.c=.o)

MAIN_OBJS = $(MAIN).o

all: $(NAME) $(EXEC)

$(NAME): $(FT_OBJS) $(CK_OBJS) $(MY_OBJS)
	$(AR) $@ $^

$(EXEC): $(MAIN_OBJS) $(NAME)
	$(CC) $(CFLAGS) $^ -o $@

$(FT_OBJS): %.o: %.c
	$(CC) -c $(CFLAGS) -Wall -Wextra -Werror $< -o $@

$(CK_OBJS): %.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

$(MY_OBJS): %.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

$(FT_OBJS) $(CK_OBJS) $(MY_OBJS):
	make -C ../libft

$(NAME): $(FT_OBJS) $(CK_OBJS) $(MY_OBJS)
	$(AR) $@ $^

$(EXEC): $(MAIN_OBJS) $(NAME)
	$(CC) $(CFLAGS) $^ -L../libft -lft -o $@
