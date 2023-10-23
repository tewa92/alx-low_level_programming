#include "main.h"

/**
* _memset - Main Function Of The prototype
* @b: Value Used To Fill The Memory
* @s: Paramater Of Function
* @n: Parameter Of Function
* Return: Value is s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
s[a] = b;
return (s);
}
