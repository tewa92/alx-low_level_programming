#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
* print_strings - Print Strings And Followed By A New Line.
* @separator: The String To Be Printed Between Strings.
* @n: The Number Of Strings Entered To The Function.
* @...: A Variable Number Of Strings To Be Printed.
*
* Description For The Output: If Separator Is Null, Don’t Print It 
•  If One Of The String Is Null, Print (Nil) Instead
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int index;


va_start(strings, n);


for (index = 0; index < n; index++)
{
str = va_arg(strings, char *);


if (str == NULL)
printf("(nil)");
else
printf("%s", str);


if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}


printf("\n");


va_end(strings);
}
