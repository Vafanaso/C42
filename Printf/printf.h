#ifndef PRINTF_H
# define PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	print_c(int c);
int	ft_printformat(char character, va_list args);
int	ft_printf(const char *format, ...);
int	print_s(char *str);
int	print_di(int i);
int	print_u(unsigned int i);
int	print_x(unsigned int i, char format);
int	print_hexptr(unsigned long int ptr);
int	print_p(unsigned long int ptr);

#endif