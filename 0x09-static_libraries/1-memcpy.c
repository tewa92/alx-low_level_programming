#include "main.h"
/**
*_memcpy - The Function That Copies Memory Area
*@dest: The Memory Used To Stored
*@src: The Memory Used TO Copied
*@n: Number Of Bytes
*Return: Copied Memory With n Byted Changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;

for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
