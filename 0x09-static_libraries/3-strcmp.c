#include "main.h"
/**
* _strcmp - Compare The String Of Values
* @s1: Input The Value
* @s2: Input The Value
*
* Return: s1[i] And - s2[i]
*/
int _strcmp(char *s1, char *s2)
{
int i;

i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}
