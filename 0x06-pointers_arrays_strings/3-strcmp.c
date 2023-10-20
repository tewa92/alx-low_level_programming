#include "main.h"
/**
 * _strcmp - Compare The String Values
 * @s1: Input Of Value
 * @s2: Input Of Value
 * Return: S1[i] - S2[i]
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
