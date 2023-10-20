#include <unistd.h>

/**
* _putchar - Writes The Character C To Stdout
* @c: The Character To Print
* Return: On Success 1.
* On error, -1 is Returned, And Errno Is Set Appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
