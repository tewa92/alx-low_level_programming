#include "main.h"
/**
* _memset - The Program Contain A Block Of Memory and A Specific Value
* @s: The Begining Address Of Memory To Be filled
* @b: The Desired Value
* @n: The Number Of Bytes To Be Changed
* Return: Change The Array With New Value For n Bytes
*/
char *_memset(char *s, char b, unsigned int n)

{
int a = 0;
for (; n > 0; a++)
{
s[a] = b;
n--;
}
return (s);
}
