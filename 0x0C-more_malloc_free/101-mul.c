#include "main.h"


/**
* _print - Moves A String To One Place To The Left One And Print The String
* @str: String To Be Moved
* @l: Size Of The String
* Return: Value Is Void
*/
void _print(char *str, int l)
{
int i, j;


i = j = 0;
while (i < l)
{
if (str[i] != '0')
j = 1;
if (j || i == l - 1)
_putchar(str[i]);
i++;
}


_putchar('\n');
free(str);
}


/**
* mul - Multiplies A Char With A String And Write The Answer Into dest
* @n: Char To Be multiply
* @num: String To Be Multiply
* @num_index: Last Non NULL Index Of The Num
* @dest: Destination Of The Multiplication
* @dest_index: Highest Index To Start The Addition
* Return: Pointer To The dest, Or NULL On The Failure
*/
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
int j, k, mul, mulrem, add, addrem;


mulrem = addrem = 0;
for (j = num_index, k = dest_index; j >= 0; j--, k--)
{
mul = (n - '0') * (num[j] - '0') + mulrem;
mulrem = mul / 10;
add = (dest[k] - '0') + (mul % 10) + addrem;
addrem = add / 10;
dest[k] = add % 10 + '0';
}
for (addrem += mulrem; k >= 0 && addrem; k--)
{
add = (dest[k] - '0') + addrem;
addrem = add / 10;
dest[k] = add % 10 + '0';
}
if (addrem)
{
return (NULL);
}
return (dest);
}


/**
* check_for_digits - Checks The Arguments To Ensure If They Are Digit Or Not
* @av: Pointer To The Arguments
* Return: Value Is 0 If digits, Else 1
*/
int check_for_digits(char **av)
{
int i, j;


for (i = 1; i < 3; i++)
{
for (j = 0; av[i][j]; j++)
{
if (av[i][j] < '0' || av[i][j] > '9')
return (1);
}
}
return (0);
}


/**
* init - Initializes Of The String
* @str: Sting To The Initialize
* @l: Length Of The Strinf
* Return: Value Is Void
*/
void init(char *str, int l)
{
int i;


for (i = 0; i < l; i++)
str[i] = '0';
str[i] = '\0';
}


/**
* main - Multiply Two Numbers
* @argc: Number Of The Arguments
* @argv: Argument Of The Vector
* Return: Value Is Zero (Success), Else Exit Status Of 98 If Failure
*/


int main(int argc, char *argv[])
{
int l1, l2, ln, ti, i;
char *a;
char *t;
char e[] = "Error\n";


if (argc != 3 || check_for_digits(argv))
{
for (ti = 0; e[ti]; ti++)
_putchar(e[ti]);
exit(98);
}
for (l1 = 0; argv[1][l1]; l1++)
;
for (l2 = 0; argv[2][l2]; l2++)
;
ln = l1 + l2 + 1;
a = malloc(ln *sizeof(char));
if (a == NULL)
{
for (ti = 0; e[ti]; ti++)
_putchar(e[ti]);
exit(98);
}
init(a, ln - 1);
for (ti = l2 - 1, i = 0; ti >= 0; ti--, i++)
{
t = mul(argv[2][ti], argv[1], l1 - 1, a, (ln - 2) - i);
if (t == NULL)
{
for (ti = 0; e[ti]; ti++)
_putchar(e[ti]);
free(a);
exit(98);
}
}
_print(a, ln - 1);
return (0);
}
