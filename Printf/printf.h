#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	print_c(int c);
int	ft_printformat(char character, va_list args);
// int	iteration(const char *format, va_list args);
int	ft_printf(const char *format, ...);
int	print_s(char *str);
int	print_di(int i);
int	print_u(unsigned int i);

#endif