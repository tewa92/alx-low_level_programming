#include "main.h"

int actual_prime(int n, int i);

/**
* is_prime_number - Calculate If An Integer Is A Prime Number Or Not
* @n: Number To Be Evaluated
*
* Return: Value Is 1 If n Is A Prime Number, Else 0
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime(n, n - 1));
}

/**
* actual_prime - Calculates If A Number Is Prime Recursively
* @n: Number To Be Evaluated
* @i: iterator
*
* Return: Value Is 1 If n Is Prime, Else 0
*/
int actual_prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (actual_prime(n, i - 1));
}
