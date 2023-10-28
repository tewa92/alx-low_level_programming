#include "main.h"
/**
* _strncat - The Function That Concatenate The Two Strings
* Using At Most n Bytes From src
* @dest: Value To Be Entered
* @src: Value To Be Entered
* @n: Value To Be Entered
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int a;
int b;
a = 0;
while (dest[a] != '\0')
{
a++;
}
b = 0;
while (b < n && src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
