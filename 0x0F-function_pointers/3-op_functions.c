#include "3-calc.h"


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


/**
* op_add - Returns The Sum Of Two Numbers.
* @a: Is The First Number.
* @b: Is The Second Number.
* Return: Value Is The Sum Of A And b.
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub - Returns the difference of two numbers.
* @a: Is The First Number.
* @b: Is The Second Number.
* Return: Value Is The Difference Of A And B.
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - Returns Is The Product Of Two Numbers.
* @a: Is The First Number.
* @b: Is The Second Number.
* Return: Value Is The Product Of A And B.
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
* op_div - Return Is The Division Of Two Numbers.
* @a: The First Number.
* @b: The Second Number.
* Return: Value Is The Quotient Of A And B.
*/
int op_div(int a, int b)
{
return (a / b);
}
/**
* op_mod - Return Is The Remainder Of The Division Of Two Numbers.
* @a: The First Number.
* @b: The Second Number.
* Return: Value Is The Remainder Of The Division Of A By B.
*/
int op_mod(int a, int b)
{
return (a % b);
}
