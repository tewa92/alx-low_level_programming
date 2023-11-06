#include <stdlib.h>
#include "dog.h"


/**
 * _strlen - To Return The Length Of A String
 * @s: The String To Be Evaluated
 * Return: The Value Is The Length Of The String
 */
int _strlen(char *s)
{
int i;


i = 0;


while (s[i] != '\0')
{
i++;
}


return (i);
}


/**
* *_strcpy - Copy The Strings Pointed To By src
* Including The Terminating Of Null Byte (\0)
* To The Buffers Of The Pointed To By Dest
* @dest: The Pointer To Buffer In Which We Copy The Strings
* @src: Strings To Be Copied
* Return: The Value Is The Pointer To Dest
*/
char *_strcpy(char *dest, char *src)
{
int len, i;


len = 0;


while (src[len] != '\0')
{
len++;
}


for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';


return (dest);
}


/**
* new_dog - To Create A New Dog
* @name: The Name Of The Dog
* @age: The Age Of The Dog
* @owner: The Owner Of The Dog
* Return: The Value Is Pointer To The New Dog (Success), Else NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int len1, len2;


len1 = _strlen(name);
len2 = _strlen(owner);


dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);


dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;


return (dog);
}
