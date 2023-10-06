#include <stdio.h>

/**
 * main - Display reverse
 * Return:The value is  Always 0 (When Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
