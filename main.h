#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char c);
int _putstr(char *s);
int _putnbr(int n);
int _printf(const char *format, ...);
int get_function(va_list args, const char *format);
int can_be_formatted(char c);
#endif
