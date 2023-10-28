#include "main.h"
/**
* _strpbrk - The Entry Point
* @s: Input The Value
* @accept: Input The Value
* Return: Value Is Always 0
*/
char *_strpbrk(char *s, char *accept)
{
int k;
while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
return (s);
}
s++;
}
return ('\0');
}
