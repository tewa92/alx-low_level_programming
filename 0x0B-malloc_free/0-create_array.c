#include "main.h"
#include <stdlib.h>
/**
* create_array - Create An Array Of Size And Assign Char "c"
* @size: Size Of The Array
* @c: Char To Be Assign
* Description: Creat An Array Of Size And Assign Char "c"
* Return: A Pointer To The Array, Or NULL If It Is fail
*/
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (i = 0; i < size; i++)
str[i] = c;
return (str);
}
