#include "main.h"

/**
* _memcpy - Main Function Of The Prototype
* @src: Parameter Of The Source
* @dest: Parameter Of Destination
* @n: Parameter Of The Function
* Return: Copied Memory
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int k;

for (k = 0; k < n; k++)
{
dest[k] = src[k];
}
return (dest);
}
