#include <stdio.h>
#include "main.h"
/**
* main -    Print The Name Of The Program
* @argc: Number Of The Arguments
* @argv: Array Of The Arguments
* Return: Value Is Always 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
