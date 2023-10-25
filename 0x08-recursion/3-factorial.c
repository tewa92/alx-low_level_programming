#include "main.h"

/**
* factorial - Parameter Of The Function
*
* @n: Function Parameter
*
* Return: Function n.
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
