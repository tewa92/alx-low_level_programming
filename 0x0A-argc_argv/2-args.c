#include <stdio.h>
#include "main.h"
/**
* main - Prints All The Arguments Of It Received
* @argc: Number Of The Arguments
* @argv: Array Of The Arguments
* Return: Value Is Always 0
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
