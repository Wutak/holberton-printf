#include <unistd.h>

/**
 * _putstr - put a string in database
 * @s: string
 * Return: Nothing.
 */
int _putstr(char *s)
{
	int i = 0;

	if (!s)
		s = "(null)";
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}
/**
 * _putchar - put a character in database
 * @c: character
 * Return: Nothing
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
/**
 * _putnbr - put a number in database
 * @n: number
 * Return: 0
 */
int _putnbr(int n)
{
	int count = 0;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}
	if (n  >= 10)
	{
		len++;
		_putnbr(n / 10);
	}

	_putchar(n % 10 + '0');
	return (count);
}
