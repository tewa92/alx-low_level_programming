#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
* print_numbers - Print The Numbers, A New Line Followed Them.
* @separator: The String printed Between These Numbers.
* @n: The Numbers Of Integer Entered To The Function.
* @...: A Variable Number Of Numbers To Printed.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int index;


va_start(nums, n);


for (index = 0; index < n; index++)
{
printf("%d", va_arg(nums, int));


if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}


printf("\n");


va_end(nums);
}
