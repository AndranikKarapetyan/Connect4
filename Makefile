TARGET = connect4

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRCS = matrice.c ft_putchar.c ft_putnbr.c main.c token.c veriff.c ft_putstr.c

OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

clean_objs:
	rm -f $(OBJS)

