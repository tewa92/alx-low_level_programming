#include <stdio.h>

/**
* main - need to be Listed all the natural number which value is  below 1024
* (excluded)that are multiples of 5 or 3.
* Return: Value is Always 0.
*/
int main(void)
{
int i, sum = 0;

for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum += i;
}

printf("%d\n", sum);

return (0);
}
