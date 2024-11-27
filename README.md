Usage Examples

#include "main.h"

int main(void)
{
int len;
len = _printf("Hello, %s!\n", "world");
_printf("length of string: %d\n", len);

_printf ("characters: %c %c %c\n", 'H', 'e', 'y');
_printf("percentage symbol: %%\n);

return (0);
}

STDOUT Result
Hello, world!
Length of string: 13
Characters H e y
Percentage symbol: %

Man Page
man ./_printf.1

Valgrind
valgrind --leak-check=full --show-leak-kinds=all ./_printf



