#include <unistd.h>

/**
 * _putstr - put a string in database.
 * @s: string
 * Return: Nothing.
 */
int _putstr(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}

/**
 * _putchar - writes a single char to the output
 * @c: char to be printed
 * Return: nothing
 */

int _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * _putnbr - writes an int to the output
 * @n: the int to be printed
 * Return: nothing
 */

void _putnbr(int n)
{
	int i = 0;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		_putnbr(n / 10);
	}

	i = (n % 10) + '0';
	_putchar(i);
}
