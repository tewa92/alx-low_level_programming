#include "main.h"

/**
 * _isalpha - checks for alphabetics character
 * @c: character needs to be checked
 * Return: 1 for alphabetic character and 0 for else
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
