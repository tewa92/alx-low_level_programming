#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary string to convert
 *
 * Return: the converted number, or 0 if b is NULL or contains characters
 * other than 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int numb;

	numb = 0;

	if (!b)
		return (0);

	/* Validate that the string contains only 0s and 1s */
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	/* Calculate the decimal value of the binary string */
	for (i = 0; b[i] != '\0'; i++)
	{
		numb <<= 1;
		if (b[i] == '1')
			numb += 1;
	}

	return (numb);
}
