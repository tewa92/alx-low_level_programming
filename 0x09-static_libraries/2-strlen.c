#include "main.h"
/**
* _strlen - Returns The Length Of A String
* @s: String
* Return: Value Is Length
*/
int _strlen(char *s)
{
int longi = 0;

while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}
