#include "main.h"

/**
 * cap_string - Capitalizes All Words Of A String.
 * @str: The String Must Be Capitalized.
 * Return: A Pointer To Changed String.
 */
char *cap_string(char *str)
{
int index = 0;

while (str[index])
{
while (!(str[index] >= 'a' && str[index] <= 'z'))
index++;

if (str[index - 1] == ' ' ||
str[index - 1] == '\t' ||
str[index - 1] == '\n' ||
str[index - 1] == ',' ||
str[index - 1] == ';' ||
str[index - 1] == '.' ||
str[index - 1] == '!' ||
str[index - 1] == '?' ||
str[index - 1] == '"' ||
str[index - 1] == '(' ||
str[index - 1] == ')' ||
str[index - 1] == '{' ||
str[index - 1] == '}' ||
index == 0)
str[index] -= 32;

index++;
}

return (str);
}
