#include <stdio.h>

/**
* main - Prints the First 50 Fibonacci Numbers, Sarting with 1 and 2
* separated by a comma(,) AND followed by a space( ).
* Return:Value is  Always 0
*/
int main(void)
{
int count;
unsigned long fib1 = 0, fib2 = 1, sum;

for (count = 0; count < 50; count++)
{
sum = fib1 + fib2;
printf("%lu", sum);

fib1 = fib2;
fib2 = sum;

if (count == 49)
printf("\n");
else
printf(", ");
}

return (0);
}
