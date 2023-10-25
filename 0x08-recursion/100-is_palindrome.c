#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
* is_palindrome - Checks If A String is A Palindrome Or Not
* @s: String To Be Reversed
*
* Return: Value Is 1 - if it is, else 0 - it's not
*/
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
* _strlen_recursion - Returns The Length Of A String
* @s: String To Be Calculated The Length
*
* Return: Length Of The String
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
* check_pal - Checks The Characters Recursively For Palindrome
* @s: String To  Be Check
* @i: iterator
* @len: Length Of The String
*
* Return: Value Is 1 - If Palindrome, Else 0 - if not
*/
int check_pal(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
return (0);
if (i >= len)
return (1);
return (check_pal(s, i + 1, len - 1));
}
