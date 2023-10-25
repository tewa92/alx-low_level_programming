#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
* _sqrt_recursion - Returns The Natural Number Square Root Of A Number
* @n: Calculate The Square Root Of A Number
*
* Return: Value Is The Resulting Square Root
*/
int _sqrt_recursion(int n)
{

if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}

/**
* actual_sqrt_recursion - Recurses To Find The Given Natural
* Number Square Root Of A Number
* @n: Calculate The Sqaure Root Of A Number
* @i: iterator
*
* Return: Value Is The Resulting Square root
*/
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (actual_sqrt_recursion(n, i + 1));
}
