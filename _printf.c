#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * get_function - gets the function depending on the caractere placed in option.
 * @args: list of arguments
 * @format: string
 * Return: it depends
 */
int get_function(va_list args, const char *format)
{
	if (format[1] == 's')
		return (_putstr(va_args(args, char *)));
	if (format[1] == 'c')
		return (_putchar(va_args(args char *)));
	if (format[1] == '%')
}
/**
 * _printf - will look through the string for the % first, then the option, or straight for the args
 * @format: string
 * Return: len
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = -1; // i = -1 pour incrementer i facilement dans le while.
	int len = 0;

	va_start(args, format);
	while(format[++i]) // permet d'eviter une incrementation qui traine et qui pourrait faire defaut en cas d'oubli√.
	{
		if (format[i] == '%' et fonction2(format[i + 1]))
			len += format_string(args, format + i++);
		else
		{
			write(1, &format[i], 1);
			len++;
		}
	}
	va_end(args);
	return(len);
}
