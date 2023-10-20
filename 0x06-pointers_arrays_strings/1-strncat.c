#include "main.h"
/**
* _strncat - Concatenates Of Two Strings
* Using Most n Bytes From src
* @dest: Input Of Value
* @src: Input Of Value
* @n: Input Of Value
* Return: Dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
