#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: pointer to an unsigned long int, the number to modify
 * @index: index of the bit to clear
 *
 * Description: This function sets the value of a bit at a given index to 0.
 *
 * Return: 1 if it succeeds, or -1 if an error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
