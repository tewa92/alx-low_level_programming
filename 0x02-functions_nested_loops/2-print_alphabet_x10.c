#include "main.h"
/**
 * print_alphabet_x10 - print lower case 10 times
 * Return: is always 0
 */

void print_alphabet_x10(void)
{

char ch;
int i;
i = 1;
while (i <= 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
i++;
}


}
