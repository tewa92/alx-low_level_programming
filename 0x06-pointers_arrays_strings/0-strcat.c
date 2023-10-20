#include"main.h"
/**
 * _strcat- Concatenates Of Two Strings
 * @dest: Value For Input
 * @src: Value For Inputs
 * Return: Void
 */
char *_strcat(char *dest, char *src)
{
int i;
int j;

i = 0;
while (dest[i] != '\0')
{
	i++;
}
j = 0;
while (src[j] != '\0')
{
	dest[i] = src[j];
	i++;
	j++;
}
dest[i] = '\0';
return (dest);
}
