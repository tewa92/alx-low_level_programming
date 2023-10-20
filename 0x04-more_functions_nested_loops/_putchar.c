#include "main.h"
#include <unistd.h>
/**
* _putchar - Writes The Character c To stdout
* @c: The Character To Print
*
* Return:On Success 1.
* On error, -1 Is Returned, and Errno Set Appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
