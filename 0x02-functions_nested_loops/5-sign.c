#include "main.h"
/**
 * print_sign - a sign of number printed
 * @n: number needs to be checked
 * Return: value  1 for positive and
 * value -1 for negativeand value 0 for zero(0)
 */
int print_sign(int n)

{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
