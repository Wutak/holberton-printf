#include <unistd.h>

/**
 * _putstr - put a string in database.
 * @s: string
 * Return: Number of char
 */
int _putstr(char *s)
{
	int i = 0;

	if (!s)
		s = "(NULL)";
	
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	
	return (i);
}

/**
 * _putchar - writes a single char to the output
 * @c: char to be printed
 * Return: 1 on success, -1 if fail
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _putnbr - writes an int to the output
 * @n: the int to be printed
 * Return: number of char
 */

int _putnbr(int n)
{
	int len = 0;

	if (n == -2147483648)
	{
		len += _putstr("-2147483648");
		return (len);
	}
	if (n < 0)
	{
		len += _putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		len += _putnbr(n / 10);
	}

	len += _putchar ((n % 10) + '0');
	return (len);
}
