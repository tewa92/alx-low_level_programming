#include "main.h"

/**
* _strspn - Main Function
* @s: Prameter Of The Function
* @accept: Parameter Of The Function
* Return: Value Is Always 0.
*/
unsigned int _strspn(char *s, char *accept)
{

unsigned int _strspn(char *s, char *accept);
unsigned int i = 0;
int k;

while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
{
i++;
break;
}
else if (accept[k + 1] == '\0')
return (i);
}
s++;
}
return (i);
}
