#include "main.h"

/**
* _strpbrk - Main Function Of The Prototype
* @s: Parameter Of The Function
* @accept: Parameter Of The Function
* Return: Value Is Always 0.
*/

char *_strpbrk(char *s, char *accept)
{
int k, j;

for (k = 0; s[k] != '\0'; k++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[k] == accept[j])
return (s + k);
}
}
return (0);
}
