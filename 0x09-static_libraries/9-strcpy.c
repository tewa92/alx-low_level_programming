#include "main.h"
/**
* char *_strcpy - The Program Copies The String Pointed To By src
* @dest: Copy to
* @src: Copy from
* Return: The String Value
*/
char *_strcpy(char *dest, char *src)
{
int a = 0;
int b = 0;
while (*(src + a) != '\0')
{
a++;
}
for ( ; b < a ; b++)
{
dest[b] = src[b];
}
dest[a] = '\0';
return (dest);
}
