
NAME = libftprintf.a
SRCS = ft_printformat.c \
		ft_print_c.c \
		ft_print_s.c \
		ft_print_di.c \
		ft_print_p.c \
		ft_print_u.c \
		ft_print_x.c \
		ft_printf.c

OBJS := ${SRCS:%.c=%.o}
CC = gcc
CCFLAGS = -Wall -Werror -Wextra
AR = ar -rcs ${NAME}
RM = rm -f
HEADER = ft_printf.h
LIBFT_DIR := libft
LIBFT_LIB := ${LIBFT_DIR}/libft.a

all: ${NAME}

${NAME}: ${OBJS}
	make -C ${LIBFT_DIR}
	mv ${LIBFT_LIB} ${NAME}
	${AR} ${NAME} ${OBJS}

%.o: %.c ${HEADER}
	${CC} ${CCFLAGS} -c $< -o $@

clean:
	make clean -C ${LIBFT_DIR}
	${RM} ${OBJS}

fclean: clean
	make fclean -C ${LIBFT_DIR}
	${RM} ${NAME} ${LIBFT_LIB}

re: fclean all

.PHONY: all clean fclean re
