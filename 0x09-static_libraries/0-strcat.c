#include "main.h"
/**
*  _strcat - The Function That Concatenates The Two Strings
*  @dest: Entered The value
*  @src: Entered The value
*  Return: value is void
*/
char *_strcat(char *dest, char *src)
{
int a;
int b;
a = 0;
while (dest[a] != '\0')
{
a++;
}
b = 0;
while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
