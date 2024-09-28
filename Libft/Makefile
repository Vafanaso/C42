NAME = libft.a

SRC =  ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_strlen.c \
ft_memset.c \
ft_bzero.c \
ft_memcpy.c \
ft_memmove.c \
ft_strlcpy.c \
ft_strlcat.c 
    
OBJ := $(SRC:%.c=%.o)

all: executableName

executableName: main.o test.o
    gcc -Wextra -Wall -Werror main.o -o executableName

main.o: main.c
    gcc -Wextra -Wall -Werror -c main.c -o main.o

test.o: test.c
    gcc -Wextra -Wall -Werror -c test.c -o test.o

clean:
    rm -f main.o test.o

fclean: clean
    rm -f executableName

re: fclean all
