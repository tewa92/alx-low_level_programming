#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Show  the lower case without q and e.
 *
 * Return: The value is Always 0 (When Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
