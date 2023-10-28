#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* check_num - Check The String If There Are Digit
* @str: An Array str
* Return: Value Is Always 0
*/
int check_num(char *str)
{
/*Declar The Variables*/
unsigned int count;
count = 0;
while (count < strlen(str)) /*count string*/
{
if (!isdigit(str[count])) /*check if str there are digit*/
{
return (0);
}
count++;
}
return (1);
}
/**
* main - Print The Name Of The Program
* @argc: Count Arguments
* @argv: Arguments
* Return: Value Is Always 0
*/
int main(int argc, char *argv[])
{
/*Declaring variables*/
int count;
int str_to_int;
int sum = 0;
count = 1;
while (count < argc) /*Go Through The Whole Array*/
{
if (check_num(argv[count]))
{
str_to_int = atoi(argv[count]); /*ATOI --> Change String To Integer*/
sum += str_to_int;
}
/*Condition If One Of The Numbers Contain Symbols These Are Not Digits*/
else
{
printf("Error\n");
return (1);
}
count++;
}
printf("%d\n", sum); /*print sum*/
return (0);
}
