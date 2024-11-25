#include <stdarg.h>
int _printf(const char *format, ..)
{
	va_list args;
	int i = -1;
	int len = 0;

	va_start(args, format);
	while(format[i++])
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
