#include "main.h"


/**
* _calloc - Allocate The Memory For An Array Of @nmemb Elements of
* @size Bytes Of Each And That Returns To A Pointer To The Allocated Memory.
* @nmemb: Allocate To The Memory For Array
* @size: Allocate To The Elements Of The Size Of Bytes
* Return: Pointer To The Allocated Of The memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *a;
unsigned int b;


if (nmemb == 0 || size == 0)
return (NULL);
a = malloc(nmemb * size);
if (a == NULL)
return (NULL);
for (b = 0; b < (nmemb * size); b++)
a[b] = 0;
return (a);
}
