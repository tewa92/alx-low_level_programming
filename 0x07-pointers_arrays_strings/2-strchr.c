#include "main.h"

/**
* _strchr - Main function
* @s: Parameter Of The Function
* @c: Parameter Of The Function
* Return: Value Is Always 0.
*/
char *_strchr(char *s, char c)
{
int k;

for (k = 0; s[k] >= '\0'; k++)
{
if (s[k] == c)
return (s + k);
}
return (0);
}
