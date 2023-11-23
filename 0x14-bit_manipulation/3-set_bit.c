#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: pointer to an unsigned long int, the number to modify
 * @index: index of the bit to set
 *
 * Description: This function sets the value of a bit at a given index to 1.
 *
 * Return: 1 if it succeeds, or -1 if an error occurs.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	setbit = 1 << index;
	*n = *n | setbit;

	return (1);
}
