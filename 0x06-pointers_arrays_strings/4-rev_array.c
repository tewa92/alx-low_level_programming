#include "main.h"
/**
 * reverse_array - Reverse Array Of Integers
 * @a: Array
 * @n: Number Of Elements Of Array
 * Return:Value Is void
 */
void reverse_array(int *a, int n)
{
int i;
int t;

for (i = 0; i < n--; i++)
{
t = a[i];
a[i] = a[n];
a[n] = t;
}
}
