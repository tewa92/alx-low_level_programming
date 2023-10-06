#include <stdio.h>

/**
 * main -Show  numbers from 0 to 9.
 *
 * Return: The value is Always 0 (When Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
