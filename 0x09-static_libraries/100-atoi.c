#include "main.h"
/**
* _atoi - Change A String Into An Integer Number.
* @s: The String To Be Used.
* Return: Value Is An Integer.
*/
int _atoi(char *s)
{
int sign = 1, i = 0;
unsigned int res = 0;
while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
i++;
}
while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
{
res = (res * 10) + (s[i] - '0');
i++;
}
res *= sign;
return (res);
}
