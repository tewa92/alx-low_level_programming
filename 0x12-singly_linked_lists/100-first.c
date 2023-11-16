#include <stdio.h>
#include "lists.h"

void first(void) __attribute__ ((constructor(101)));

/**
* first - function executed before main.
* This function is marked with the constructor attribute and a priority
* to ensure it is executed before the main function. It prints a sentence
* indicating the start of the program.
*/
void first(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
