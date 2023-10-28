#include "main.h"
/**
* _strstr - The Entry Point
* @haystack: Input The Value
* @needle: Input The Value
* Return: Value Is Always 0
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *l = haystack;
char *p = needle;
while (*l == *p && *p != '\0')
{
l++;
p++;
}
if (*p == '\0')
return (haystack);
}
return (0);
}
