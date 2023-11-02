#include <stdlib.h>
#include "main.h"

/**
* *array_range - Create An  Array Of The Integers
* @min: Minimum Range Of The Values Stored
* @max: Maximum Range Of The Values Stored And Number Of Elements
* Return: Pointer To The New Array
*/

int *array_range(int min, int max)
{
int *ptr;
int i, size;
if (min > max)
return (NULL);
size = max - min + 1;
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
return (NULL);
for (i = 0; min <= max; i++)
ptr[i] = min++;
return (ptr);
}
