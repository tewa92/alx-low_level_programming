#include <unistd.h>

/**
* _putchar - Writes The Character c To stdout(Standared Output)
* @c: The Character To Be Printed
*
* Return: On Success Value Is 1.
* On error, -1 Is The Value For Returned, And errno Is Set Appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
