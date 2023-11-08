#include "function_pointers.h"
/**
* int_index - Return The Index Place If Comparison = True, Else -1
* @array: Array
* @size: Size Of The Elements In Array
* @cmp: Pointer To The Function Of One The Three Int Main
* Return: Value Is 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;


if (array == NULL || size <= 0 || cmp == NULL)
return (-1);


for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
