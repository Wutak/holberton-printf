#include <unistd.h>

/**
 * _putstr - put a string in database.
 * @s: string
 * Return: Nothing.
 */
void _putstr(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}

void _putchar(char c)
{
	write(1, &c, 1);
}

void _putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ();
	}
	
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n  >= 10)
		_putnbr(n / 10);

	_putchar(n % 10 + '0');
}
