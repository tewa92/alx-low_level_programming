#include <stdlib.h>
#include "dog.h"


/**
* free_dog - Free Memory Allocated To A Struct Dog
* @d: The Struct Dog To Be free
*/
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
