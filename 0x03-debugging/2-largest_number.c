#include "main.h"
/**
* largest_number - Returns The Largest Of 3 Numbers
* @a: First Integer
* @b: Second Integer
* @c: Third Integer
* Return: Largest Number
*/

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

return (largest);
}
