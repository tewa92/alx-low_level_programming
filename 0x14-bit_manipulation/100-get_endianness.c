#include "main.h"

/**
 * get_endianness- checks the endianness of the system
 *
 * Description: This function determines the endianness of the system
 * by examining the value stored in a memory location.
 *
 * Return:
 *   0 if the system is little-endian,
 *   1 if the system is big-endian.
 */
int get_endianness(void)
{
	int i;
	char *j;

	i = 1;
	j = (char *)&i;
	return (*j);
}
