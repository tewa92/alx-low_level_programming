#include "main.h"
/**
* _strchr - The Entry Point
* @s: Input Value
* @c: Input Value
* Return: Value Is Always 0
*/
char *_strchr(char *s, char c)
{
int i = 0;

for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
