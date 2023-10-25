#include "main.h"
/**
* _pow_recursion - Name Of The Function
* @x: Parameter 1
* @y: Parameter 2
* Return: Value Of a Given Number Paased To The Function
*/


int _pow_recursion(int x, int y)
{

if (y < 0)
return (-1);

else if (y == 0)
return (1);

else
return (x * _pow_recursion(x, (y - 1)));

return (0);
}
