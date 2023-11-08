#include"function_pointers.h"
#include<stdio.h>

/*
 * print_name - Print A Name That Uses Pointer To The Function
 * @name: The String To Be Added
 * @f: The Pointer To The Function
 * Return: Value Is Noting
 */

void print_name(char *name, void (*f)(char *))

{
if(name == NULL || f == NULL)
return;
f(name);
}
