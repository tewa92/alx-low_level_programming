#include "3-calc.h"
#include <stdlib.h>
/**
* get_op_func - Selects The Correct Function To Execute
*          The Operation Asked By The User.
* @s: The Operator Passed As An Argument.
* Return: Value Is A Pointer To The Function Corresponding
* To The Operator Given As A Parameter.
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL},
};


int i = 0;


while (ops[i].op != NULL && *(ops[i].op) != *s)
i++;


return (ops[i].f);

}
