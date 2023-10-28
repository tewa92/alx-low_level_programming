#include <stdio.h>
#include "main.h"
/**
* main - Print The Number Of Arguments Passed To Program
* @argc: Number Of The Arguments
* @argv: Array Of The Arguments
* Return: Value Is Always 0
*/
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}
