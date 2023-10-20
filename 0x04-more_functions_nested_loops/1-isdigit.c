#include "main.h"

/**
* _isdigit - Check If Numbers Are 0 - 9
* @c: Char To Be Checked
*
* Return: Value Is 0 or 1
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
