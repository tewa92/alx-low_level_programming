#include "main.h"
#include <stdio.h>
/**
* main - The Entry point
* _puts
* Return: Value Is Always 0
*/
void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}

