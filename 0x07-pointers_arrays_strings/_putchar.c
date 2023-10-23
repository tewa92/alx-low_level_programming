#include <unistd.h>

/**
* _putchar - To Writes Character c To Tdout
* @c: Character To Print
* Return:Value On Success 1.
* On error, Value Is -1 For Returned, and errno Is Set Appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

