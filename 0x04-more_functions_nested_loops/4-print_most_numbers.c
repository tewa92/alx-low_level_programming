#include "main.h"

/**
* print_most_numbers - Print Numbers Except 2 And 4
*
* return: Value Is void
*/

void print_most_numbers(void)
{
char c;

for (c = '0'; c <= '9'; c++)
{
if (!(c == '2' || c == '4'))
_putchar(c);
}
_putchar('\n');
}
