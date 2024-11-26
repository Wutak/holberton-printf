#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void _putstr(char *s);
void _putnbr(int n);
int _printf(const char *format, ...);
int print_number(int n);
int get_function(va_list args, const char *format);
int format_string(va_list args, const char *format);
#endif
