#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - Print The Name Using Pointer To The Function
* @name: String To Be Add
* @f: Pointer To The Function
* Return: Value Is nothing
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
