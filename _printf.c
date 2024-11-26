#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - will look through the string for the % first, then the option, or straight for the args
 * @format: string of args
 * Return: len
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = -1; // i = -1 pour incrementer i facilement dans le while.
	int len = 0;

	va_start(args, format);
	while(format[++i]) // permet d'eviter une incrementation qui traine et qui pourrait faire defaut si jamais oubli√e.
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
