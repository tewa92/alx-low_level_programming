#include "main.h"

/**
* _strlen_recursion - Main Function
*
* @s: Parameter Of The Function
*
* Return: length
*/
int _strlen_recursion(char *s)
{
int lnt = 0;

if (*s)
{
lnt++;
lnt += _strlen_recursion(s + 1);
}
return (lnt);
}
