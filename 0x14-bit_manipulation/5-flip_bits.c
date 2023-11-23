#include "main.h"

/**
 * flip_bits - counts the number of bits needed to flip to convert
 *		one number to another
 * @n: first unsigned long int number
 * @m: second unsigned long int number
 *
 * Description: This function counts the number of bits needed to flip in order
 * to convert one number to another.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			countbit++;
	}

	return (countbit);
}

