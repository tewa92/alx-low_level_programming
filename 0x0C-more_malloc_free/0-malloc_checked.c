#include "main.h"
#include<stdlib.h>
#include<stddef.h>
#include<stdlib.h>

/**
* malloc_checked - Cause Normal Process Of The Termination With
* A Status Of Value Of 98
* @b: Allocated Memory
* Return: A Pointer To Be The Allocated Memory
*/
void *malloc_checked(unsigned int b)
{
void *i;
i = malloc(b);
if (i == NULL)
exit(98);
return (i);
}
