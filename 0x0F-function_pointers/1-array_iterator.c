#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - Prints Each Array Elements On A New Line
* @array: Array
* @size: How Many Elements To Be Printed
* @action: Pointer To Be Printed In Regular Or Hex
* Return: Value Is Void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;


if (array == NULL || action == NULL)
return;


for (i = 0; i < size; i++)
{
action(array[i]);
}
}
