#include "main.h"


/**
* _realloc - Reallocates A Memory Of Blocks Using A Malloc And Free
* @ptr: Pointer To The Memory Of Previously Allocated
* @old_size:Is The Size Of, In Bytes, Of The Allocated Space For ptr
* @new_size: The New Size Of, In Bytes Of The New Memory Blocks
* Return: Pointer To Be allocated New Size Memory, Or NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
unsigned int i, n = new_size;
char *oldp = ptr;


if (ptr == NULL)
{
p = malloc(new_size);
return (p);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
return (ptr);
p = malloc(new_size);
if (p == NULL)
return (NULL);
if (new_size > old_size)
n = old_size;
for (i = 0; i < n; i++)
p[i] = oldp[i];
free(ptr);
return (p);
}
