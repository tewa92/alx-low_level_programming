#include "main.h"
/**
* _isalpha - Checks For The Alphabetic Character
* @c: The Character To Be Checked
* Return: Value Is 1 if c is a letter, Else 0
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
