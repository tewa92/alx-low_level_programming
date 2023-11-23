#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: unsigned long int, the number to check
 * @index: index of the bit to get
 *
 * Description: This function gets the value (either 0 or 1) of a bit at a
 * given index.
 *
 * Return: The value of the bit at the specified index, or -1
 *		if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	divisor = 1 << index;
	check = n & divisor;

	if (check == divisor)
		return (1);

	return (0);
}
