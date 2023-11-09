#include "variadic_functions.h"
#include <stdarg.h>


/**
* sum_them_all - Return The Sum Of All paramters.
* @n: The Number's Of Paramters Entered To The Function.
* @...: A Variable's Number Of Paramter To Calculate The Sum.
* Return: Value Is 0 If n == 0 Else The Sum Of All Parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum = 0;


va_start(ap, n);


for (i = 0; i < n; i++)
sum += va_arg(ap, int);


va_end(ap);


return (sum);
}
