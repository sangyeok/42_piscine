CC = gcc

CFLAGS = -Wall -Wextra -Werror -c

INCDIR = includes

TARGET = libft.a

SURCES = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJCTS = $(SURCES:.c=.o)

all: $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@ -I $(INCDIR)
	
$(TARGET): $(OBJCTS)
	ar cr $@ $(OBJCTS)

.PHONY : all clean fclean re
	
clean:
	rm -f $(OBJCTS)

fclean: clean
	rm -f $(TARGET)

re: fclean all
