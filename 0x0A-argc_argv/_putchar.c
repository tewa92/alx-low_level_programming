#include <stdio.h>
#include "main.h"
/**
* _putchar - Writes The Character c To stdout
* @c:The Character To Be Print
* Return: Value Is 1 On success
* On error, Value Is -1 And Returned And errno Is Set Appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
