#include "main.h"

/**
* _puts_recursion - Main Function
*
* @s: Parameter Of The Function
*
* Return: Value Is Always 0.
*/
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
