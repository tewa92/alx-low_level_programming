#include <stdlib.h>
#include "dog.h"


/**
* init_dog - Initializes Of A Variable Type Struct Dog
* @d: Pointer To Be Struct Dog To Be Initialize
* @name: Name To Be Initialize
* @age: Age To Be Initialize
* @owner: Owner To Be Initialize
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
