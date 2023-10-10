#include <unistd.h>

/**
 * _putchar - the character "c" is write to stdout
 * @c: character to be printed
 *
 * Return: success 1
 * error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
