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
	else if (format[1] == 'c')
		return (_putchar(va_args(args int)));
	else if (format[1] == '%')
		return (_putchar('%');
	else if (format[1] == 'd')
		return (_putnbr(va_args(args int)), "0123456789");
	else if (format[1] == 'i')
		return (_putnbr(va_args(args int)), "0123456789");
	return (0);
}
/**
 * can_be_formatted - return the corresponding character
 * @c: character to be returned
 * Return: character
 */
int can_be_formatted(char c)
{
	return (c == 's' || c == 'd' || c == 'i' || c == '%' || c == 'c') //will check to determine if c is recognized as an option.
}

/**
 * _printf - will look through the string for the % first, then the option, or print the character if no % was found
 * @format: string
 * Return: len
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = -1;
	int len = 0; //len will determine the number of arguments in the string.

	va_start(args, format);
	while(format[++i])
	{
		if (format[i] == '%' && can_be_formatted(format[i + 1])) //checks if i == %, if it is, check if the next character is recognized as an option.
			len += get_function(args, format + i++); //will get the adapted function based on the option and will add it to the length of the string.
		else
		{
			write(1, &format[i], 1);
			len++;
		}
	}
	va_end(args);
	return (len);
}
