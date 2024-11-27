#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * print_number - print a number
 * @n: the number to print
 * Return: number of printed char
 */
int print_number(int n)
{
	int len = 0;
	char buffer[12];
	unsigned int num;
	int i = 0;

	if (n < 0)
	{
		write(1, "-", 1);
		num = -n;
		len++;
	}
	else
	{
		num = n;
	}

	if (num == 0)
	{
		buffer[i++] = '0';
	}
	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}

	while (i--)
	{
		write(1, &buffer[i], 1);
		len++;
	}

	return (len);
}

/**
 * get_function - gets the function depending on the caractere placed in option.
 * @args: list of arg
 * @format: string
 * Return: it depends
 */
int get_function(va_list args, const char *format)
{
	if (format[0] == 's')
		return (_putstr(va_arg(args, char *)));
	if (format[0] == 'c')
		return (_putchar(va_arg(args, int)));
	if (format[0] == '%')
		return (_putchar('%'));
	if (format[0] == 'd' || format[1] == 'i')
		return (print_number(va_arg(args, int)));
	return (0);
}

/**
 * _printf - will look through the string for the % first, then the option, or straight for the args
 * @format: string of args
 * Return: len
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = -1; /*i = -1 pour incrementer i facilement dans le while.*/
	int len = 0;

	va_start(args, format);
	while(format[++i]) /*permet d'eviter une incrementation qui traine et qui pourrait faire defaut si jamais oubliee.*/
	{
		if (format[i] == '%' && format[i + 1] != '\0')
			len += get_function(args, &format[++i]);
		else
		{
			write(1, &format[i], 1);
			len++;
		}
	}
	va_end(args);
	return(len);
}
