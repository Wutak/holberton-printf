#include <stdio.h>
#include "main.h"

int main(void)

{
	int len1, len2;

	/* test for str */
	len1 = _printf("Hello, %s!\n", "world");
	len2 = printf("Hello, %s!\n", "world");
	printf("Lengths: _printf = %d, printf = %d\n\n", len1, len2);
	/* test for char */
	len1 = _printf("Character: %c\n", 'A');
	len2 = printf("Character: %c\n", 'A');
	printf("Lengths: _printf = %d, printf = %d\n\n", len1, len2);
	/* Test for % */
	len1 = _printf("Percent sign: %%\n");
	len2 = printf("Percent sign: %%\n");
	printf("Lengths: _printf = %d, printf = %d\n\n", len1, len2);
	/* test for positive int */
	len1 = _printf("Positive number: %d\n", 123);
	len2 = printf("Positive number: %d\n", 123);
	printf("Lengths: _printf = %d, printf = %d\n\n", len1, len2);
	/* test for negative int */
	len1 = _printf("Negative number: %i\n", -456);
	len2 = printf("Negative number: %i\n", -456);
	printf("Lengths: _printf = %d, printf = %d\n\n", len1, len2);
	/* test for empty string */
	len1 = _printf("Empty string: %s\n", "");
	len2 = printf("Empty string: %s\n", "");
	printf("Lengths: _printf = %d, printf = %d\n\n", len1, len2);

	return (0);
}
