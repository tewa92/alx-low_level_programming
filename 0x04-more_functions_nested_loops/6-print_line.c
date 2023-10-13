#include "main.h"

/**
 * print_line - Draws a Straight Line in The Terminal
 * @n: Number Of Times The Character _ should be printed
 */
void print_line(int n)
{
  if (n <= 0)
  {
    _putchar('\n');
  }
  else
  {
    int i;

    for (i = 1; i <= n; i++)
    {
      _putchar('_');
    }
    _putchar('\n');
  }
}
