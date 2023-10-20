#include "main.h"

/**
* print_line - Draws Straight Line In The Terminal
* @n: Number Of Times The Character _ Should Be Printed
*/
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;

for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}

}
