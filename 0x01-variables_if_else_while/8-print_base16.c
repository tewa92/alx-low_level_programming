#include <stdio.h>

/**
 * main - Display numbers between 0 to 9 and lower case between a to f.
 *
 * Return: The value is Always 0 (When Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
