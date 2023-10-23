#include "main.h"

/**
* _strstr - Main Function
*
* @needle: Parameter Of The Function
*
* @haystack: Parameter of The Function
*
* Return: Value Is Always 0.
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *I = haystack;
char *P = needle;

while (*I == *P && *P != '\0')
{
I++;
P++;
}
if (*P == '\0')
return (haystack);
}
return (0);
}
